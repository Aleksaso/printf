/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbru.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:16:51 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/21 23:30:42 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

// int	ft_char(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }

int	ft_contadoru(unsigned int nb)
{
	int	cnt;

	cnt = 0;
	if (nb == 0)
		cnt++;
	while (nb != 0)
	{
		nb = nb / 10;
		cnt++;
	}
	return (cnt);
}

int	ft_nbru(unsigned int nb)
{
	int	res;

	res = ft_contadoru(nb);
	if (nb > 9)
	{
		ft_nbru(nb / 10);
		nb %= 10;
	}
	ft_char (nb + '0');
	return (res);
}
/*
int	main(void)
{
	int res;
	res = ft_nbru(-4556);
	printf("\n%i", res);
	return (0);
}*/
