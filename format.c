/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:34:44 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/28 19:51:52 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
 int formatcheck(char c, va_list args)
{
  int j;

  j = 0;
  if(c == 'c')
  return(ft_putchar(va_arg(args,int)));
else if(c == 's')
  return(ft_putstr(va_arg(args,char *)));
else if(c == 'p')
  return(ft_putptr(va_arg(args,unsigned long)));
else if (c == 'd' || c == 'i')
  return (ft_putnbr(va_arg(args,int)));
  else if ( c == 'u')
  return(ft_putnbr_unsigned(va_arg(args,unsigned int)));
else if ( c == 'x' || c == 'X')
  return(ft_puthex(va_arg(args,unsigned int),c));
else if ( c == '%')
  return(ft_putchar('%'));
else 
{
  j += ft_putchar('%');
  j += ft_putchar(c);
}
return(j);
}