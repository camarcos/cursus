/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:26:04 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:33:53 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *org, size_t len)
{
	void	*dinicio;

	if (!dst && !org)
		return (0);
	dinicio = dst;
	if (org < dst)
	{
		org += len;
		dst += len;
		while (len--)
			*(char *)--dst = *(char *)--org;
	}
	else
		while (len--)
			*(char *)dst++ = *(char *)org++;
	return (dinicio);
}
/*
int main()
{
	char str1[] = "GeeksforGeeks";
	char str2[] = "GeeksforGeeks";
	ft_memmove(str1, str2, 13);
	printf("Copied string is %s\n", str1);
	return 0;
}
*/
// ___ += len hace que apunte al ultimo byte de la memoria 
// se copian bytes en direcciones inversas para garantizar que se copian
