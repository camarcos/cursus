/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:23:19 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/02 11:41:04 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	slen;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= slen)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}
