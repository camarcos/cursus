/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:45:26 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/01 11:07:07 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	i;
	size_t	len;

	i = 0;
	len = size * count;
	mem = malloc(len);
	if (mem == NULL)
		return (0);
	while (len > 0)
	{
		((unsigned char *)mem)[i] = '\0';
		i++;
		len--;
	}
	return ((unsigned char *)mem);
}
