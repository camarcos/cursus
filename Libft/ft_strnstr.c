/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:27:55 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:36:06 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*haystack_mem;
	const char	*needle_mem;
	size_t		i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		i = len;
		haystack_mem = haystack;
		needle_mem = needle;
		while (i-- > 0 && *haystack_mem && *needle_mem
			&& *haystack_mem == *needle_mem)
		{
			haystack_mem++;
			needle_mem++;
		}
		if (*needle_mem == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
/*
int main()
{
	char s1[] = "abcdefgh";
	char s2[] = "def";
	size_t n = 5;
	printf("%s\n", ft_strnstr(s1, s2, n));
	printf("%s\n", strnstr(s1, s2, n));
	return 0;
}
*/
//busca la primera aparicion de la subcadena y en la cadena principal
// needle es la subcadena y haystack es la cadena principal
