/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2sanscom.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:47:51 by lorey             #+#    #+#             */
/*   Updated: 2024/09/08 20:29:57 by lorey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	two_arrays(char *btab, char ***tabnumber, char ***tabletter);
int	create_btab(char **btab, char *file_name);
int	nbr_lines(char *btab, char *file_name);
int	write_nbr(char **tabnumber, char **tabletter, char *av);

void	str_cpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
}

int	main(int ac, char **av)
{
	char	*btab;
	char	**tabnumber;
	char	**tabletter;
	char	file_name[20];
	int		i;

	i = 0;
	if (ac == 3)
		str_cpy(file_name, av[2]);
	else if (ac == 2)
		str_cpy(file_name, "dict/numbers.dict");
	else
	{
		write(1, "ERROR NBRARG", 12);
		return (-1);
	}
	if (create_btab(&btab, file_name) == -1)
	{
		write(1, "ERROR CREATING BTAB", 19);
		return (-1);
	}
	if (two_arrays(btab, &tabnumber, &tabletter))
	{
		write(1, "ERROR CREATING TABNUMBER OR TABLETTER", 37);
		free(btab);
		return (-1);
	}
	write_nbr(tabnumber, tabletter, av[1]);
	while (i < nbr_lines(btab, file_name))
	{
		free(tabnumber[i]);
		free(tabletter[i]);
		i++;
	}
	free(tabnumber);
	free(tabletter);
	free(btab);
	return (0);
}
