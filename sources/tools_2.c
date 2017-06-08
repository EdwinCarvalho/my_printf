/*
** main2.c for main2.c in /home/aidewen/Epitech/Unix System/PSU_2016_my_printf
** 
** Made by Edwin ROCHA CARVALHO
** Login   <aidewen@epitech.net>
** 
** Started on  Tue Nov 15 17:09:49 2016 Edwin ROCHA CARVALHO
** Last update Thu Jun  8 17:44:23 2017 edwin
*/

#include "main.h"
#include "macros.h"

void	my_putstr_case_s2(char *str)
{
  int	i;

  i = 0;
  while (str[i] != END_OF_STRING)
    {
      if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
	{
	  my_putchar(92);
	  if (str[i] <= 7)
	    my_putchar('0');
	  if (str[i] <= 63)
	    my_putchar('0');
	  my_nbrbase(str[i], OCTAL_BASE);
	}
      else
	my_putchar(str[i]);
      i = i + 1;
    }
}

void	my_put_nbr(int nb)
{
  if (nb == -2147483647 - 1)
    {
      my_putchar('-');
      my_putchar('2');
      nb = 147483648;
      my_put_nbr(nb);
    }
  else if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
      my_put_nbr(nb);
    }
  else if (nb >= 0 && nb <= 9)
    my_putchar(nb + '0');
  else
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
}

int	my_nbrbase(unsigned int nb, char *base)
{
  int	lenght;
  int	a;

  a = 0;
  lenght = my_strlen(base);
  a = nb % lenght;
  nb = nb / lenght;
  if (nb > 0)
    my_nbrbase(nb, base);
  my_putchar(base[a]);
  return (nb);
}

int	my_nbrpoint(unsigned int nb, char *base)
{
  int	lenght;
  int	a;

  my_putstr("0x");
  a = 0;
  lenght = my_strlen(base);
  a = nb % lenght;
  nb = nb / lenght;
  if (nb > 0)
    my_nbrbase(nb, base);
  my_putchar(base[a]);
  return (nb);
}
