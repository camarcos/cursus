/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:24:41 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:33:27 by camarcos         ###   ########.fr       */
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
/*
int	main()
{
	char str[] = "Hello";
	ft_memset(str, 'a', 3);
	printf("%s\n", str);
	return 0;
}
*/
//pnt = un puntero al inicio del bloque de memoria que se llenará.
//valor = el valor que se utilizará para llenar el bloque.
//num = la cantidad de bytes que se deben llenar en el bloque.

// i<num --> aun hay bytes por llenar en la memoria
