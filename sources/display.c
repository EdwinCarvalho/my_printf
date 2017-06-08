/*
** display.c for display.c in /home/aidewen/Epitech/Unix System/PSU_2016_my_printf
** 
** Made by Edwin ROCHA CARVALHO
** Login   <aidewen@epitech.net>
** 
** Started on  Tue Nov 15 10:34:37 2016 Edwin ROCHA CARVALHO
** Last update Thu Jun  8 17:46:00 2017 edwin
*/

#include <stdarg.h>
#include "main.h"
#include "macros.h"

void	display_di(va_list ap, ...)
{
  int	i;

  i = va_arg(ap, int);
  my_put_nbr(i);
}

void	display_s(va_list ap, ...)
{
  char	*s;

  s = va_arg(ap, char *);
  my_putstr(s);
}

void	display_c(va_list ap, ...)
{
  int	c;

  c = va_arg(ap, int);
  my_putchar(c);
}

void	display_u(va_list ap, ...)
{
  int	u;

  u = va_arg(ap, int);
  my_put_un_nbr(u);
}

void	display_x(va_list ap, ...)
{
  int	x;

  x = va_arg(ap, int);
  my_nbrbase(x, HEXA_BASE_MIN);
}
