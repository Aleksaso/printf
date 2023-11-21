/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbru.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:16:51 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/21 19:04:44 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_nbru(unsigned int nb)
{
	if (nb <= 0)
		return (10);
	if (nb > 9)
	{
		ft_nbru(nb / 10);
		nb %= 10;
	}
	ft_char (nb + '0');
	return (nb);
}

// int	main(void)
// {
// 	int x;
// 	printf("%u\n", 797);
// 	x = ft_printf("\nEl resultado es: %u\n", (797));
// 	printf("%i", x);
// 	ft_printf("%i", x);
// 	return (0);
// }
