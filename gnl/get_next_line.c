/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:17:08 by camarcos          #+#    #+#             */
/*   Updated: 2024/07/04 09:54:26 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_joinfree(char *main, char *temp) // une dos cadnas y las une en una nueva y despues libera
{
	char	*new;

	new = ft_strcat(main, temp);
	free(main);
	return (new);
}

char	*ft_rest(char *main) // busca \n, copia todo lo hay despues y libera
{
	int		i;
	int		j;
	char	*newmain;

	i = 0;
	while (main[i] != '\0' && main[i] != '\n')
		i++;
	if (main[i] == '\0')
	{
		free(main);
		return (NULL);
	}
	newmain = ft_calloc(sizeof(char), (ft_strlen(main) - i + 1));
	i++;
	j = 0;
	while (main[i] != '\0')
		newmain[j++] = main[i++];
	free(main);
	return (newmain);
}

char	*ft_makeline(char *main) // busca \n o \0, guarda memoria y copia todo lo q hay antes
{
	int		i;
	char	*new;

	i = 0;
	if (main[i] == '\0')
		return (NULL);
	while (main[i] != '\0' && main[i] != '\n')
		i++;
	new = ft_calloc(sizeof(char), (i + 2));
	i = 0;
	while (main[i] != '\0' && main[i] != '\n')
	{
		new[i] = main[i];
		i++;
	}
	if (main[i] == '\n')
		new[i] = '\n';
	return (new);
}

char	*ft_readall(int fd, char *main) // lee el texto hasta \n o fin y devuelve todo
{
	int		numchar;
	char	*temp;

	if (!main)
		main = ft_calloc(1, 1);
	temp = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	numchar = 1;
	while (numchar > 0)
	{
		numchar = read(fd, temp, BUFFER_SIZE);
		if (numchar == -1)
		{
			free(temp);
			free(main);
			return (NULL);
		}
		temp[numchar] = '\0';
		main = ft_joinfree(main, temp);
		if (ft_strchr(main, '\n'))
			break ;
	}
	free(temp);
	return (main);
}

char	*get_next_line(int fd) // funcion principal
{
	char		*new;
	static char	*main;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	main = ft_readall(fd, main);
	if (main == NULL)
		return (NULL);
	new = ft_makeline(main);
	main = ft_rest(main);
	return (new);
}

int main()
{
	char *line;
	int fd = open("test.txt", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	return (0);
}
