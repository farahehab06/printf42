/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helperfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:25:04 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/28 20:02:58 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
   int  ft_putchar(char c)
 {
  return(write(1,&c,1));
 }
 
  int ft_putstr(char *s)
 {
  int i;
  
    if (!s)
      s = "(null)";
  i = 0;
  while(s[i])
  {
    write(1,&s[i],1);
    i++;
  }
  return(i);
 }
  int ft_putptr(unsigned long ptr)
 {
  int i;

  i = 0;
  if(ptr == 0)
  {
    i += ft_putstr("(nil)");
    return (i);
  }
  i += write(1,"0x",2);
  i +=ft_puthex(ptr,'x');
  return(i);
 }
 int	ft_putnbr(int n)
{
  int count;

  count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
    count++;
    
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
  count += ft_putchar(n % 10 + '0');
  return(count);
}
unsigned int ft_putnbr_unsigned(unsigned int n)
{
  int count ;

  count = 0;
  	if (n > 9)
		count += ft_putnbr(n / 10);
  count += ft_putchar(n % 10 + '0');
  return(count);
}
