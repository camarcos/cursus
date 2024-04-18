/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:25:02 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 10:32:05 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pnt, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		((char *)pnt)[i] = 0;
		i++;
	}
}
/*
int	main()
{
	char str[] = "Hello";
	ft_bzero(str, 3);
	printf("%s\n", str);
	return 0;
}
*/
//igual que memset reserva memoria pero inicializa con valor 0
