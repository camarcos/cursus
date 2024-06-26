/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:23:00 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:32:19 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	{
		if (c >= 0 && c <= 127)
			return (1);
	}
	return (0);
}
/*
int main()
{
	char c = 'a';
	printf("%d\n", ft_isascii(c));
	return 0;
}
*/
