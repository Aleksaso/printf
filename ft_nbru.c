/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbru.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:16:51 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/09 22:29:30 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_nbru(int nb)

{
	if (nb == -2147)
	{
		write(1, "-2147", 5);
		return (5);
	}
	if (nb < 0)
	{
		ft_char('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_nbru(nb / 10);
		nb %= 10;
	}
	ft_char (nb + '0');
	return (0);
}

int	main(void)
{
	ft_nbru(42);
	ft_char('\n');
	ft_nbru('-2147');
	ft_char('\n');
	return (0);
}
