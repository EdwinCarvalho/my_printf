/*
** display3.c for display3.c in /home/aidewen/Epitech/Unix System/PSU_2016_my_printf
** 
** Made by Edwin ROCHA CARVALHO
** Login   <aidewen@epitech.net>
** 
** Started on  Tue Nov 15 19:28:24 2016 Edwin ROCHA CARVALHO
** Last update Thu Jun  8 17:47:29 2017 edwin
*/

#include <stdarg.h>
#include "main.h"
#include "macros.h"

void	display_p(va_list ap, ...)
{
  int	point;

  point = va_arg(ap, int);
  my_nbrpoint(point, HEXA_BASE_MIN);
}
