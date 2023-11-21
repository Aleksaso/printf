/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:14:07 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/21 22:56:26 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int	nblen(int nb)
{
	int	len;

	len = 1;
	while (nb / 10 > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_controlcenter(va_list	args, char type)
{
	int	contador;

	contador = 0;
	if (type == 'c')
		contador += ft_char(va_arg(args, int));
	else if (type == 'i')
		contador += ft_putnbr(va_arg(args, int));
	else if (type == 'x' || type == 'X')
		contador += ft_hexdma(*(va_arg(args, unsigned int *)), type);
	else if (type == 'd')
		contador += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		contador += ft_nbru(va_arg(args, unsigned int));
	else if (type == 'p')
		contador += ft_ptro(va_arg(args, unsigned long long));
	else if (type == '%')
		contador += ft_simbol();
	else if (type == 's')
		contador += ft_str(va_arg(args, char *));
	return (contador);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		total;
	va_list	args;

	va_start(args, str);
	i = 0;
	total = 0;
	while (str [i] != '\0')
	{
		if (str[i] != '%')
		{
			total += ft_char(str[i]);
		}
		else
		{
			i++;
			total += ft_controlcenter(args, str[i]);
		}
		i++;
	}
	va_end(args);
	return (total);
}

// int	main(void)
// {
// 	int	x;
// 	int	*p;

// 	x = 10;
// 	p = &x;
// 	ft_printf("%i %d \n", 184, 18);
// 	printf("%p %p \n", (void *)-184, (void *)184);
// }
// {char_value = va_arg(args, int);
// contador += ft_char(char_value);}
