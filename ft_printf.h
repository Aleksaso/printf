/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:13:57 by asilva-o          #+#    #+#             */
/*   Updated: 2023/11/09 22:40:01 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>

int	ft_printf(char const *str, ...);
int	ft_char(char c);
int	ft_entri();
int	ft_hexdma();
int	ft_hexdmi();
int	ft_nbru(int c);
int	ft_numd();
int	ft_ptro();
int	ft_simbol();
int	ft_str(char *str);

#endif
