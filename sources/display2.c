/*
** display2.c for display2.c in /home/aidewen/Epitech/Unix System/PSU_2016_my_printf
** 
** Made by Edwin ROCHA CARVALHO
** Login   <aidewen@epitech.net>
** 
** Started on  Tue Nov 15 10:45:42 2016 Edwin ROCHA CARVALHO
** Last update Thu Jun  8 17:47:19 2017 edwin
*/

#include <stdarg.h>
#include "main.h"
#include "macros.h"

void	display_pourcentage(va_list ap, ...)
{
  my_putchar('%');
  (void)ap;
}

void	display_o(va_list ap, ...)
{
  int	o;

  o = va_arg(ap, int);
  my_nbrbase(o, OCTAL_BASE);
}

void	display_b(va_list ap, ...)
{
  int	b;

  b = va_arg(ap, unsigned int);
  my_nbrbase(b, "01");
}

void	display_s2(va_list ap, ...)
{
  char	*s2;

  s2 = va_arg(ap, char *);
  my_putstr_case_s2(s2);
}

void	display_xmaj(va_list ap, ...)
{
  int	x_maj;

  x_maj = va_arg(ap, int);
  my_nbrbase(x_maj, HEXA_BASE_MAJ);
}
