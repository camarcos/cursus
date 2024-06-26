/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:22:35 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:32:11 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	{
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
			|| (c >= 48 && c <= 57))
			return (1);
	}
	return (0);
}
/*
int main()
{
	char c = 'a';
	printf("%d\n", ft_isalnum(c));
	return 0;
}
*/
