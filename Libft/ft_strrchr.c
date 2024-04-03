/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:30:45 by camarcos          #+#    #+#             */
/*   Updated: 2024/03/22 17:15:53 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strrchr(const char *s, int c)
{
	int	lon;
	int	busq;

	busq = 0;
	lon = ft_strlen(s);
	while (lon >= 0 && busq == 0)
	{
		if (s[lon] == c)
		{
			return ((char *)&s[lon]);
			busq = 1;
		}
		lon--;
	}
	return (NULL);
}
*/

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen((char *)str);
	while (len > 0 && str[len] != (char)c)
	{
		len--;
	}
	if (str[len] == (char)c || !c)
		return ((char *)str + len);
	return (NULL);
}
