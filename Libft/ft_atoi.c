/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:01:26 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/03 12:30:27 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	total;
	int	sing;

	i = 0;
	total = 0;
	sing = 1;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing = -1;
		else
			sing = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i++] - '0');
	}
	return (sing * total);
}
/*
int	main()
{
	printf("%d", ft_atoi("-1235e34"));
	return 0;
}*/
