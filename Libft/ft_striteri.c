/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:36:48 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 13:21:29 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	while (len > i)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main()
{
	char str[] = "Hello World";
	ft_striteri(str, &ft_toupper);
	printf("%s\n", str);
	return 0;
}
*/
// aplica una funcion a cada caracter de la string
