/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 23:06:04 by lorey             #+#    #+#             */
/*   Updated: 2024/09/08 23:08:08 by lorey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	print_nbr(char *num, char **tabletter, char **tabnumber)
{
	int	i;

	if (num[0] != '0')
	{
		i = 1;
		while (i < 10)
		{
			if (num[0] == tabnumber[i][0])
			{
				write(1, tabletter[i], ft_strlen(tabletter[i]));
				write(1, " ", 1);
			}
			i++;
		}
		write(1, tabletter[28], ft_strlen(tabletter[28]));
		write(1, " ", 1);
	}
	if (num[1] != '0')
	{
		if (num[1] == '1')
		{
			i = 10;
			while (i < 20)
			{
				if (num[1] == tabnumber[i][0] && num[2] == tabnumber[i][1])
				{
					write(1, tabletter[i], ft_strlen(tabletter[i]));
					write(1, " ", 1);
					break ;
				}
				i++;
			}
		}
		else
		{
			i = 20;
			while (i < 28)
			{
				if (num[1] == tabnumber[i][0])
				{
					write(1, tabletter[i], ft_strlen(tabletter[i]));
					write(1, " ", 1);
					break ;
				}
				i++;
			}
		}
	}
	if (num[1] != '1' && num[2] != '0')
	{
		i = 1;
		while (i < 10)
		{
			if (num[2] == tabnumber[i][0])
			{
				write(1, tabletter[i], ft_strlen(tabletter[i]));
				write(1, " ", 1);
				break ;
			}
			i++;
		}
	}
}

void	print_suffix(int pos, char **tabletter)
{
	if (pos >= 2)
	{
		write(1, tabletter[pos + 28], ft_strlen(tabletter[pos + 28]));
		write(1, " ", 1);
	}
	else if (pos == 1)
	{
		write(1, "thousand ", 9);
	}
}

void	write_nbr(char **tabnumber, char **tabletter, char *av)
{
	int		i;
	char	num[3];
	int		rest;
	int		pos;

	i = 0;
	pos = ft_strlen(av) / 3;
	rest = ft_strlen(av) % 3;
	if (rest == 2)
	{
		num[0] = '0';
		num[1] = av[i];
		num[2] = av[i + 1];
		i += 2;
		print_nbr(num, tabletter, tabnumber);
		print_suffix(pos, tabletter);
		pos--;
	}
	else if (rest == 1)
	{
		num[0] = '0';
		num[1] = '0';
		num[2] = av[i];
		i += 1;
		print_nbr(num, tabletter, tabnumber);
		print_suffix(pos, tabletter);
		pos--;
	}
	while (i < ft_strlen(av))
	{
		num[0] = av[i];
		num[1] = av[i + 1];
		num[2] = av[i + 2];
		i += 3;
		print_nbr(num, tabletter, tabnumber);
		if (pos > 0)
		{
			print_suffix(pos, tabletter);
		}
		pos--;
	}
}
