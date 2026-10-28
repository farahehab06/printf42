/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:31:41 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/28 19:47:05 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stddef.h>
#include<unistd.h>
# include "../Libft/libft.h"

int ft_printf(const char *str, ...);
 int formatcheck(char c, va_list args);
int ft_puthex(unsigned long hex, char type);
int  ft_putchar(char c);
 int ft_putstr(char *s);
 int ft_putptr(unsigned long ptr);
  int	ft_putnbr(int n);
  unsigned int ft_putnbr_unsigned(unsigned int n);
  #endif
