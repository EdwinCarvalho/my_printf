/*
** main.c for main.c in /home/aidewen/Epitech/Unix System/PSU_2016_my_printf
**
** Made by Edwin ROCHA CARVALHO
** Login   <aidewen@epitech.net>
**
** Started on  Wed Nov  9 14:03:20 2016 Edwin ROCHA CARVALHO
** Last update Thu Jun  8 17:42:32 2017 edwin
*/

#include <unistd.h>
#include "main.h"
#include "macros.h"

void	my_putchar(char c)
{
  write(STDOUT, &c, 1);
}

void	my_printprct()
{
  my_putchar('%');
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != END_OF_STRING)
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != END_OF_STRING)
    i = i + 1;
  return (i);
}

void	my_put_un_nbr(unsigned nb)
{
  if (nb <= 9)
    my_putchar(nb + '0');
  else
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
}
