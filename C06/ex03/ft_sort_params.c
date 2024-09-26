/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:45:31 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/05 11:45:33 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int ac, char **av)
{
	int		i;
	char	*tpm;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			tpm = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tpm;
			i = 0;
		}
		i++;
	}
}

void	ft_putstr(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1),
			j++;
		}
		write(1, "\n", 1);
	i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_sort(ac, av);
		ft_putstr(av);
	}
	return (0);
}
