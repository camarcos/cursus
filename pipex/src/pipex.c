/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:49:51 by camarcos          #+#    #+#             */
/*   Updated: 2024/10/21 11:18:33 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	exec(char *comd, char **env)
{
	char	**divcomnd;
	char	*rut;

	divcomnd = ft_split(comd, ' ');
	rut = gtpath(divcomnd[0], env);
	if (execve(rut, divcomnd, env) == -1)
	{
		ft_putstr_fd("pipex: command not found: ", 2);
		ft_putendl_fd(divcomnd[0], 2);
		freearray(divcomnd);
		exit(0);
	}
}
// remplzan el programa actual y por uno nuevo 
// execve --> ejecuta un programa nuevo basado en un path a un archivo ejecutable 
// exec --> mas simple, de la misma familia

void	child(char **argv, int *p_fd, char **varia)
{
	int		fd;

	fd = openfile(argv[1], 0);
	dup2(fd, 0);
	dup2(p_fd[1], 1);
	close(p_fd[0]);
	exec(argv[2], varia);
}
// usamos la funcion para redirigir la entrada y salida de datos y escribir  
// argv[1] --> es  el archivo de entrada 
// 0 -->  entrada estandar
// 1 --> salida estandar
// dup2(fd, 0) --> duplica el fd y lo asigna en la entrada
// dup2(p_fd[1],1) --> duplica el pipe y le da salida
// argv[2] --> es el primer comando 
// cuando se ejecuta child deja de existir

void	parent(char **argv, int *p_fd, char **varia)
{
	int		fd;

	fd = openfile(argv[4], 1);
	dup2(fd, 1);
	dup2(p_fd[0], 0);
	close(p_fd[1]);
	exec(argv[3], varia);
}
// dup --> duplicar fd de archivos en casos donde no te importa q numero de fd se asigne al duplicado
// dup2 --> duplica el fd dado permitiendo especificar un fd exacto para la duplicación

int	main(int ac, char **argv, char **varia)
{
	int		p_fd[2];
	pid_t	pid;

	if (ac != 5)
		error(1);
	if (pipe(p_fd) == -1)
		exit(-1);
	pid = fork();
	if (pid == -1)
		exit(-1);
	if (!pid)
		child(argv, p_fd, varia);
	parent(argv, p_fd, varia);
}
// 