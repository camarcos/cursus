/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putelse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:50:27 by camarcos          #+#    #+#             */
/*   Updated: 2024/05/19 19:37:00 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_putstr(char *str, int *len)
{
	int	count;

	if (!str)
		return (ft_putstr("(null)", len));
	count = 0;
	while (str[count])
		ft_putchar(str[count++], len);
}

void	ft_diffcase(char const *format, va_list args, int *len)
{
	if (*format == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (*format == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (*format == 'd' || *format == 'i')
		ft_decimal(va_arg(args, int), len);
	else if (*format == 'p')
		print_pointer(va_arg(args, size_t), "0123456789abcdef", len);
	else if (*format == 'u')
		ft_unsigned(va_arg(args, unsigned int), len);
	else if (*format == 'x')
		ft_hexa(va_arg(args, unsigned int), "0123456789abcdef", len);
	else if (*format == 'X')
		ft_hexa(va_arg(args, unsigned int), "0123456789ABCDEF", len);
	else if (*format == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_diffcase(format, args, &len);
		}
		else
		{
			write(1, format, 1);
			len++;
		}
		format++;
	}
	va_end(args);
	return (len);
}

/*int main()
{
ft_printf("Hello, %s, %d!\n", "world");
ft_printf("Hello, %s!\n", NULL);
ft_printf("Hello, %c!\n", 'w');
ft_printf("Hello, %d!\n", 42);
ft_printf("Hello, %i!\n", 42);
ft_printf("Hello, %p!\n", "world");
printf("original: %p!\n", "world");
ft_printf("Hello, %u!\n", 42);
ft_printf("Hello, %x!\n", 42);
ft_printf("Hello, %X!\n", 42);
ft_printf("Hello, %%!\n");
return (0);
}

int main()
{
	int a, b;
a = ft_printf("Hello, %s%!\n", "world");
b = printf("Hello, %s%!\n", "world");
printf("a: %d, b: %d\n", a, b);
ft_printf("Hello, %c!\n", 'w');
printf("original: %c!\n", 'w');
ft_printf("Hello, %d!\n", 42);
printf("original: %d!\n", 42);
ft_printf("Hello, %i!\n", 42);
printf("original: %i!\n", 42);
ft_printf("Hello, %p!\n", NULL);
printf("original: %p!\n", NULL);
ft_printf("Hello, %u!\n", 42);
printf("original: %u!\n", 42);
ft_printf("Hello, %x!\n", 25);
printf("original: %x!\n", 25);
ft_printf("Hello, %X!\n", 25);
printf("original: %X!\n", 25);
ft_printf("Hello, %%!\n");
printf("original: %%!\n");
return (0);
}
*/
