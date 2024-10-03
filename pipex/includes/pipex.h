/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:23:26 by camarcos          #+#    #+#             */
/*   Updated: 2024/10/03 13:17:15 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>  
# include <stdlib.h>
# include <stddef.h>
# include <sys/stat.h>

// principal

//utils

void	error(int code);
int	    openfile(char *rut, int value);
void	freearray(char **nomb);
char	*gtname(char *nomb, char **vari);
char	*gtpath(char *comnd, char **varia);

# endif
