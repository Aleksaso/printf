/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:16:51 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/02 20:48:08 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_nbr(int nb)

{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_char('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_nbr(nb / 10);
		nb %= 10;
	}
	ft_char (nb + '0');
}

int	main(void)
{
	ft_nbr(42);
	ft_char('\n');
	ft_nbr('-2147483648');
	ft_char('\n');
	return (0);
}
