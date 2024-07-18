/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:53:17 by camarcos          #+#    #+#             */
/*   Updated: 2024/07/15 18:38:07 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c) //calcular longitud
{
	size_t	len;

	len = 0;
	while (c[len])
		len++;
	return (len);
}

char	*ft_strchr(char *save, int character) // busca un caracter y la recorre hasta que lo encuentra
{
	unsigned long int	i;

	i = 0;
	while (save[i] != character && save[i] != '\0')
		i++;
	if (save[i] == character)
		return (save +  i);
	return (NULL);
}

void	ft_bzero(void *str, unsigned long int n) // vaciar la cadena y llenarla de \0
{
	char				*s;
	unsigned long int	i;

	s = (char *)str;
	i = 0;
	while (i < n)
		s[i++] = '\0';
}

void	*ft_calloc(size_t size, size_t cont) // para la reserva de memoria

{
	char	*result;

	result = malloc(size * cont);
	if (!result)
		return (NULL);
	ft_bzero(result, (size * cont));
	return (result);
}

char	*ft_strcat(char *s1, char *s2) // para unir dos cachos de cadena
{
	char	*s;
	int		i;

	s = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s || !s1 || !s2)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		s[i] = s1[i];
	i = -1;
	while (s2[++i] != '\0')
		s[ft_strlen(s1) + i] = s2[i];
	s[ft_strlen(s1) + i] = '\0';
	return (s);
}