/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:30:45 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:35:27 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen((char *)str);
	while (len > 0 && str[len] != (char)c)
	{
		len--;
	}
	if (str[len] == (char)c || !c)
	{
		return ((char *)str + len);
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "Hello World";
	char c = 'o';
	printf("%s\n", ft_strrchr(str, c));
	return 0;
}	
*/
//busca la última aparición de un carácter especifico y 
//devuelve el ppuntero de la ultima aparición de ese carácter en la cadena
