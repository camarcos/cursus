/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:11:55 by camarcos          #+#    #+#             */
/*   Updated: 2024/10/03 13:16:32 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	error(int code)
{
	if (code == 1)
		ft_putstr_fd("./pipex infile cmd cmd outfile\n", 2);
//para manejar mas errores (else if)
	exit(0);
}

int	openfile(char *rut, int valor)
{
	int	inout;

	if (valor == 0)
		inout = open(rut, O_RDONLY, 0777);
	if (valor == 1)
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

char	*gtname(char *nomb, char **vari)
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
// sub = ... --> es 0 porq esta comparando  y son identicas las cadenas 
// +1 empezar a devolver despues del =

char	*gtpath(char *comnd, char **varia)
{
	int		i;
	char	**path;
	char	**divcomnd;
	char	*path_part;
	char	*conca;

	i = -1;
	path = ft_split(gtname("PATH", varia), ':');
	divcomnd = ft_split(comnd, ' ');
	while (path[++i])
	{
		path_part = ft_strjoin(path[i], "/");
		conca = ft_strjoin(path_part, divcomnd[0]);
		free(path_part);
		if (access(conca, F_OK | X_OK) == 0)
		{
			freearray(divcomnd);
			return (conca);
		}
		free(conca);
	}
	freearray(path);
	freearray (divcomnd);
	return (comnd);
}

// split --> divide en subcadenas	
// : --> separador de las rutas
// F_OK --> si funciona 
// X_OK --> si es ejecutable
// i = -1 porque se preincrementa antes de acceder