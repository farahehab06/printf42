/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 20:12:53 by fabuassa          #+#    #+#             */
/*   Updated: 2026/10/28 19:49:33 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"ft_printf.h"


int ft_printf(const char *str, ...)
{
  int i;
  int count;
  va_list args;

  i = 0;
  count = 0;
  va_start(args,str);
if (str == NULL)
return(-1);
while(str[i])
{
  if(str[i] == '%')
  {
    i++;
    count += formatcheck(str[i],args);
  }
  else
    count +=write(1,&str[i],1);
  i++;
}
va_end(args);  
  return (count);
}