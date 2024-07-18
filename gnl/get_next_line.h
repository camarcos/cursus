/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:16:49 by camarcos          #+#    #+#             */
/*   Updated: 2024/07/04 09:41:30 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 999
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdint.h>
# include <limits.h>

//principal
char	*ft_joinfree(char *main, char *temp);
char	*ft_rest(char *main);
char	*ft_makeline(char *main);
char	*ft_readall(int fd, char *main);
char	*get_next_line(int fd);

//utils
size_t	ft_strlen(const char *c);
char	*ft_strchr(char *save, int character);
void	ft_bzero(void *str, unsigned long int n);
void	*ft_calloc(size_t size, size_t cont);
char	*ft_strcat(char *s1, char *s2);

#endif
