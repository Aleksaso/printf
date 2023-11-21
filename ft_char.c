/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:16:29 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/21 20:52:33 by asilva-o         ###   ########.fr       */
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

// int	main(void)
// {
// 	int	x = 999;
// 	int y = 0;
// 	// char c = 'f';
// 	//x	=	ft_char('c');
// 	// x = printf("%%c\n");
// 	printf("%i\n", x);
// 	y = ft_printf("%d", x);
// 	printf("\nValor:%i\n", y);
// }
