/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:24:41 by camarcos          #+#    #+#             */
/*   Updated: 2024/03/25 13:24:51 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pnt, int valor, size_t num)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = pnt;
	while (i < num)
	{
		a[i] = (unsigned char)valor;
		i++;
	}
	return (pnt);
}
