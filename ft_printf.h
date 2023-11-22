/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:13:57 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/22 09:22:07 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>

int		ft_printf(char const *str, ...);
int		ft_char(char c);
int		ft_hexd(unsigned int n, char type);
int		ft_putnbr(int nb);
int		ft_nbru(unsigned int nb);
int		ft_ptro(unsigned long long n);
int		ft_simbol(void);
int		ft_str(char *str);
int		count(unsigned long long n);
void	recursiva(unsigned long long nbr, char *base);
int		ft_contador(int nb);
int		ft_contadoru(unsigned int nb);

#endif
