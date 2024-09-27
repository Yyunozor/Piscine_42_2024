/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_arrays.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 04:14:21 by lorey             #+#    #+#             */
/*   Updated: 2024/09/08 23:08:57 by lorey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	nbr_lines(char *btab);

int	extract_number(char *btab, int *i, char **tabnumber, int j)
{
	int	bkp;
	int	k;

	bkp = *i;
	while (btab[*i] && btab[*i] != ':')
		(*i)++;
	if (btab[*i] == '\0')
		return (1);
	tabnumber[j] = malloc((*i - bkp + 1) * sizeof(char));
	if (!tabnumber[j])
		return (1);
	k = 0;
	while (bkp < *i)
		tabnumber[j][k++] = btab[bkp++];
	tabnumber[j][k] = '\0';
	(*i) += 2;
	return (0);
}

int	extract_text(char *btab, int *i, char **tabletter, int j)
{
	int	k;
	int	bkp;

	bkp = *i;
	while (btab[*i] && btab[*i] != '\n')
		(*i)++;
	tabletter[j] = malloc((*i - bkp + 1) * sizeof(char));
	if (!tabletter[j])
		return (1);
	k = 0;
	while (bkp < *i)
		tabletter[j][k++] = btab[bkp++];
	tabletter[j][k] = '\0';
	if (btab[*i] == '\n')
		(*i)++;
	return (0);
}

void	free_all(char **tabnumber, char **tabletter, int j)
{
	int	l;

	l = -1;
	while (++l < j)
	{
		free(tabnumber[l]);
		free(tabletter[l]);
	}
}

int	alloc_col(char ***tabnumber, char ***tabletter, char *btab)
{
	int	lines;

	lines = nbr_lines(btab);
	*tabnumber = malloc(lines * sizeof(char *));
	*tabletter = malloc(lines * sizeof(char *));
	if (!*tabnumber || !*tabletter)
	{
		if (*tabnumber)
			free(*tabnumber);
		if (*tabletter)
			free(*tabletter);
		return (1);
	}
	return (0);
}

int	two_arrays(char *btab, char ***tabnumber, char ***tabletter)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (alloc_col(tabnumber, tabletter, btab))
		return (1);
	while (btab[i])
	{
		if (extract_number(btab, &i, *tabnumber, j) \
		|| extract_text(btab, &i, *tabletter, j))
		{
			free_all(*tabnumber, *tabletter, j);
			free(*tabnumber);
			free(*tabletter);
			return (1);
		}
		j++;
	}
	return (0);
}
