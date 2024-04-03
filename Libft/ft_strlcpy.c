/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:26:33 by camarcos          #+#    #+#             */
/*   Updated: 2024/03/25 13:26:42 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *org, size_t sizedst)
{
	size_t	i;
	size_t	lon;

	lon = 0;
	lon = ft_strlen(org);
	if (dst != NULL && sizedst != 0)
	{
		i = 0;
		while ((i < lon) && i < (sizedst - 1))
		{
			dst[i] = org[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lon);
}
