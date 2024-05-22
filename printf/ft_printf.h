/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:32:05 by camarcos          #+#    #+#             */
/*   Updated: 2024/05/17 15:10:28 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	print_pointer(size_t num, char *hex_digits, int *len);
void	ft_hexa(size_t num, char *hex_digits, int *len);
void	ft_decimal(int num, int *len);
void	ft_unsigned(unsigned int num, int *len);
void	ft_diffcase(char const *format, va_list args, int *len);

#endif
