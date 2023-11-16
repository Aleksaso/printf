/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdmi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:22:00 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/16 10:56:16 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
#include "ft_printf.h"

int	ft_char(char c)

{
	write(1, &c, 1);
	return (1);
}

int	ft_hexdmi(unsigned int n, char type)
{
	char	*base;

	if (type == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n > 15)
	{
		ft_hexdmi(n / 16, type);
	}
	ft_char(base[n % 16]);
}

// int	main(void)
// {
// 	int num = 232;
// 	//printf(" El resultado es: ");
// 	ft_hexdmi(num, 'x');
// 	printf("\n");
// 	return (0);
// }
