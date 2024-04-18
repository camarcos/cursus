/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:26:56 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:34:37 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *org, size_t sizedst)
{
	size_t	londst;
	size_t	lonorg;
	size_t	cont;

	londst = ft_strlen(dst);
	lonorg = ft_strlen(org);
	if (sizedst <= londst)
	{
		return (lonorg + sizedst);
	}
	cont = londst;
	while (*org != '\0' && cont < (sizedst - 1))
	{
		*(dst + cont++) = *org++;
	}
	*(dst + cont) = '\0';
	return (londst + lonorg);
}
/*
int main()
{
	char dst[50] = "Hola";
	char org[50] = "Mundo";
	size_t sizedst = 10;
	printf("%lu\n", ft_strlcat(dst, org, sizedst));
	printf("%s\n", dst);
	return 0;
}
*/
// concatena cadenas de forma segura evitando desbordamientos
