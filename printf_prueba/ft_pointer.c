/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:24:00 by camarcos          #+#    #+#             */
/*   Updated: 2024/05/22 10:57:28 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_pointer(size_t num, char *hex_digits, int *len)
{
	if (!num)
		return (ft_putstr("(nil)", len));
	ft_putstr("0x", len);
	ft_hexa(num, hex_digits, len);
}
