/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:29:59 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:35:56 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		++s1;
		++s2;
	}
	return (0);
}
/*
int main()
{
	char s1[] = "Hello World";
	char s2[] = "Hello World";
	size_t n = 5;
	printf("%d\n", ft_memcmp(s1, s2, n));
	return 0;
}
*/
//compara los primeros n bytes de las areas de memoria apuntadas por s1 y s2
