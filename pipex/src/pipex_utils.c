/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:11:55 by camarcos          #+#    #+#             */
/*   Updated: 2024/10/01 10:27:05 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error(int code)
{
	if (code == 1)
		ft_putstr_fd("./pipex infile cmd cmd outfile\n", 2);
//para manejar mas errores (else if)
	exit(0);
}

int	openfile(char *rut, int value)
{
	int	inout;

	if (value == 0)
		inout = open(rut, O_RDONLY, 0777);
	if (value == 1)
		inout = open(rut, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (inout == -1)
		exit(0);
	return (inout);
}
// value = 0 --> lectura
// value = 1 --> escritura
// 0777 permiso lectura, escritura y ejecución
// trunc = borrado y vacio
// int fd = openfile("archivo.txt", 0) --> abrir modo lectura

void	freearray(char **nomb)
{
	size_t	i;

	i = 0;
	while (nomb[i])
	{
		free(nomb[i]);
		i++;
	}
	free(nomb);
}
// libera las cadenas de forma individual dentro y luego el array principal
// evitar fugas de memoria en el programa

char	*getname(char *nomb, char **vari)
{
	int		i;
	int		j;
	char	*sub;

	i = 0;
	while (vari[i])
	{
		j = 0;
		while (vari[i][j] && vari[i][j] != '=')
			j++;
		sub = ft_substr(vari[i], 0, j);
		if (ft_strcmp(sub, nomb) == 0)
		{
			free(sub);
			return (vari[i] + j + 1);
		}
		free(sub);
		i++;
	}
	return (NULL);
}
// busca una variable de entorno por su nombre y devuelve su valor
// nombre = variable (nomb = varia)
// i --> recorre cada variable
// j --> recorre cada caracter de la variable hasta =


char	*get_path(char *cmd, char **varia)
{
	int		i;
	char	*exec;
	char	**allpath;
	char	*path_part;
	char	**s_cmd;

	i = -1;
	allpath = ft_split(my_getenv("PATH", varia), ':');
	s_cmd = ft_split(cmd, ' ');
	while (allpath[++i])
	{
		path_part = ft_strjoin(allpath[i], "/");
		exec = ft_strjoin(path_part, s_cmd[0]);
		free(path_part);
		if (access(exec, F_OK | X_OK) == 0)
		{
			ft_free_tab(s_cmd);
			return (exec);
		}
		free(exec);
	}
	ft_free_tab(allpath);
	ft_free_tab(s_cmd);
	return (cmd);
}
