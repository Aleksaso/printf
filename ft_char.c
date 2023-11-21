/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:16:29 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/18 19:01:40 by asilva-o         ###   ########.fr       */
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
// 	int	x;
// 	x	=	ft_char('c');
// 	printf("%i\n", x);
// }

/*void	ft_char(char c, int *ptr)

{
	write(1, &c, 1);
	*ptr++;
}

int	main(void)
{
	int *cnt;

	*cnt = 0;
	ft_char('c', cnt);
	printf("%i", x);
}*/
