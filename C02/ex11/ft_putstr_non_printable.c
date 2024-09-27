/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:48:33 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/08 22:48:34 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(char c)
{
	char	*hexset;

	hexset = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexset[(unsigned char)c / 16]);
	ft_putchar(hexset[(unsigned char)c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_hex(str[i]);
	i++;
	}
}
/*int	main(int ac, char **av)
{
	(void) ac;
	(void) av;

	char str[] = "\fCoucou\ntu vas\t bien\v ?";

	ft_putstr_non_printable(str);
	return(0);
}
*/