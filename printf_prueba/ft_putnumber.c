/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:53:06 by camarcos          #+#    #+#             */
/*   Updated: 2024/05/17 10:20:28 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(size_t num, char *hex_digits, int *len)
{
	if (num >= 16)
		ft_hexa((num / 16), hex_digits, len);
	ft_putchar(hex_digits[num % 16], len);
}

void	ft_decimal(int num, int *len)
{
	unsigned int	num2;

	num2 = 0;
	if (num < 0)
	{
		ft_putchar('-', len);
		num2 = -num;
	}
	else
		num2 = num;
	if (num2 >= 10)
		ft_decimal(num2 / 10, len);
	ft_putchar(num2 % 10 + '0', len);
}

void	ft_unsigned(unsigned int num, int *len)
{
	unsigned int	digit;

	digit = 0;
	if (num >= 10)
		ft_unsigned(num / 10, len);
	digit = num % 10 + '0';
	ft_putchar(digit, len);
}
