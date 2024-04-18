/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:28:55 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:35:33 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t c)
{
	size_t	i;

	i = 0;
	while (i < c && ((unsigned char)s1[i] != '\0'
			|| (unsigned char)s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i == c && c > 0)
	{
		return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	}
	return (0);
}
/*
int main()
{
	char s1[] = "Hello World";
	char s2[] = "Hello World";
	size_t c = 5;
	printf("%d\n", ft_strncmp(s1, s2, c));
	return 0;
}
*/
// compara dos cadenas hasta cirto numero de caracteres
//o hasta que ecuentre un caracter diferente
