/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:58:41 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/08 20:58:42 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lower(str);
	while (str[i])
	{
		if (i == 0 || (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')
				&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				&& !(str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;

	char	str[] = "Salut, coMMent tu vas ? 42mots Quarante-deux; cinquSnte+et+un";

	printf ("%s", ft_strcapitalize(str));
	return (0);
}
*/