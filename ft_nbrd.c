/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:33:18 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/21 20:27:09 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_nbrd(int nb)
{
	int	x;
	int	bak;
	int	*total;

	x = 0;
	bak = nb;
	total = &x;
	if (nb < 0)
		return (ft_nbrd(-nb));
	if (nb > 9)
	{
		ft_nbrd(nb / 10);
		nb %= 10;
	}
	*total += 1;
	ft_char (nb + '0');
	return (bak);
}

// int	main(void)
// {
// 	int	nb = -16544654;
// 	int x;
// 	printf("\nresultado es: %d\n", (nb));
// 	x = ft_printf("%d", (nb));
// // 	printf("%i\n", x);
// 	//nb = ft_printf("%d", nb);
// 	printf("\nTiene un total de :%i\n", x);
// // }
// 	return (0);
// }
