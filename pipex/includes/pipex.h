/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:23:26 by camarcos          #+#    #+#             */
/*   Updated: 2024/10/18 12:57:24 by camarcos         ###   ########.fr       */
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
void	exec(char *comd, char **env);
void	child(char **argv, int *p_fd, char **varia);
void	parent(char **argv, int *p_fd, char **varia);
int	    main(int ac, char **av, char **env);


//utils
void	error(int code);
int		openfile(char *rut, int value);
void	freearray(char **nomb);
char	*gtname(char *nomb, char **vari);
char	*gtpath(char *comnd, char **varia);

#endif
