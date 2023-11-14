/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbru.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:16:51 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/14 19:40:56 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_char(char c)
{
	write(1, &c, 1);
	return (10);
}

int	ft_nbru(unsigned int nb)
{
	if (nb < 0)
		return (10);
	if (nb > 9)
	{
		ft_nbru(nb / 10);
		nb %= 10;
	}
	ft_char (nb + '0');
}

int	main(void)
{
	printf("%u", -897);
	ft_nbru(-897);
}
