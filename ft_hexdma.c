/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdma.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:22:00 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/15 14:39:40 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_char(char c)

{
	write(1, &c, 1);
	return (1);
}

int	ft_hexdma(unsigned int n, char type)
{
	char	*base;

	if (type == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n > 15)
	{
		ft_hexdma(n / 16, type);
	}
	ft_char(base[n % 16]);
}

int main()
{
	int num = 232;
	//printf(" El resultado es: ");
	ft_hexdma(num, 'X');
	printf("\n");
	return (0);
}
