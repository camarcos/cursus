/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:25:24 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:52:07 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*mem;
	size_t	i;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	mem = malloc((len + 1) * sizeof(char));
	if (mem == NULL)
		return (0);
	while (s1[i])
	{
		mem[i] = s1[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
/*
int main()
{
	char *str = "Hello World";
	printf("%s\n", ft_strdup(str));
	return 0;
}
*/
// duplica cadena de string includo el caracter nulo
// if (mem == NULL) para compromabar si se ha reservado memoria correctamente
