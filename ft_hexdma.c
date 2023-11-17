/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdma.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:22:00 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/17 10:26:36 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_char(char c)

{
	write(1, &c, 1);
	return (1);
}

int	ft_hexdma(unsigned int n, char type)
{
	char	*base;
	int		chars_printed;

	chars_printed = 0;
	if (type == 'X' && type != 'x')
	{
		return (-1);
	}
	if (type == 'X' && type != 'x')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n > 15)
	{
		chars_printed += ft_hexdma(n / 16, type);
	}
	chars_printed += ft_char(base[n % 16]);
	return (chars_printed);
}

// int	main(void)
// {
// 	int	num = 232;
// 	//printf(" El resultado es: ");
// 	ft_hexdma(num, 'X');
// 	printf("\n");
// 	return (0);
// }
