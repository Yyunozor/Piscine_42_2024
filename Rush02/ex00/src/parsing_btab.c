/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_btab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 04:14:08 by lorey             #+#    #+#             */
/*   Updated: 2024/09/08 04:14:11 by lorey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	file_size(int *nbr, char *file_name)
{
	int	count;
	int	buffer[1];

	count = 0;
	*nbr = open(file_name, O_RDWR);
	if (*nbr == -1)
		return (-1);
	while (read(*nbr, buffer, sizeof(char)) > 0)
		count++;
	close(*nbr);
	return (count);
}

int	create_btab(char **btab, char *file_name)
{
	int	nbr;
	int	size;

	size = file_size(&nbr, file_name);
	if (size == -1)
		return (-1);
	*btab = malloc(sizeof(char) * (size + 1));
	if (!*btab)
		return (-1);
	nbr = open(file_name, O_RDWR);
	if (nbr == -1)
	{
		free(*btab);
		return (-1);
	}
	read(nbr, *btab, sizeof(char) * size);
	(*btab)[size] = '\0';
	close(nbr);
	return (0);
}
