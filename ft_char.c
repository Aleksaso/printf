/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:16:29 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/17 11:02:01 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER_H
# define MY_HEADER_H

# include <unistd.h>
# include <stdio.h>
# include "ft_printf.h"

int	ft_char(int c)

{
	write(1, &c, 1);
	return (1);
}

#endif // MY_HEADER_H

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
