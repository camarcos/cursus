/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:27:55 by camarcos          #+#    #+#             */
/*   Updated: 2024/03/25 12:54:52 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*haystack_tem;
	const char	*needle_tem;
	size_t		i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		i = len;
		haystack_tem = haystack;
		needle_tem = needle;
		while (i-- > 0 && *haystack_tem && *needle_tem
			&& *haystack_tem == *needle_tem)
		{
			haystack_tem++;
			needle_tem++;
		}
		if (*needle_tem == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}

/*int	main(void)
{
	char *c = "abcdefgh";
	char *q = "def";
	printf("%s \n", ft_strnstr(c, q, 5));
	printf("%s \n", strnstr(c, q, 5));
	return (0);
}*/
