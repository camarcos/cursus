/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:24:09 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:33:11 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while ((char)str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main()
{
	char str[] = "Hello";
	printf("%zu\n", ft_strlen(str));
	return 0;
}
*/
