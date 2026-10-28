/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helperfuncpt2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 19:09:33 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/28 19:49:01 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
 int ft_puthex(unsigned long hex, char type)
{
  char *base;
  int count;

  count  = 0;
  if(type == 'X')
  base = "0123456789ABCDEF";
else 
base = "0123456789abcdef";
if (hex >= 16)
  count += ft_puthex(hex /16,type);
 count += ft_putchar(base[hex %16]);
 return (count);
}