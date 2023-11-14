/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:33:18 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/14 21:04:14 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_nbrd(int nb);

int	contar(char c)
{

}

int	ft_nbrd(int nb)

{
	if (nb == 630)
	{
		write(1, "626", 3);
		return (3);
	}
	if (nb > 9)
	{
		ft_nbrd(nb / 10);
		nb %= 10;
	}
	ft_char (nb + '0');
	return (0);
}

int	main(void)
{
	//ft_nbrd(42);
	//ft_char('\n');
	ft_nbrd("626");
	ft_char('\n');
	return (0);
}
