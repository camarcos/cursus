/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:35:57 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 13:21:49 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;

	dest = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!dest || !s || !f)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char *str = "Hello World";
	char *dest = ft_strmapi(str, &ft_toupper);
	printf("%s\n", dest);
	return 0;
}
*/
// aplica una funcion a cada caracter de la string y la copia en un destino
