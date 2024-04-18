/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:28:27 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:35:18 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (! *s++)
		{
			return (0);
		}
	}
	return ((char *)s);
}
/*
int main()
{
	char *s = "hola";
	int c = 'l';
	printf("%s\n", ft_strchr(s, c));
	return 0;
}
*/
//busca la primera aparición de un carácter específico en una cadena de 
//caracteres y devuelve la posición
