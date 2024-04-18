/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:25:35 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:33:42 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *org, size_t num)
{
	unsigned const char	*o;
	unsigned char		*d;
	size_t				i;

	d = (unsigned char *) dst;
	o = (unsigned char *) org;
	i = 0;
	while (dst == org || !num)
	{
		return (dst);
	}
	while (num > i)
	{
		d[i] = o[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
	char str1[] = "GeeksforGeeks";
	char str2[] = "GeeksforGeeks";
	ft_memcpy(str1, str2, 13);
	printf("Copied string is %s\n", str1);
	return 0;
}
*/
