/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:58:20 by anpayot           #+#    #+#             */
/*   Updated: 2024/08/22 17:25:50 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}