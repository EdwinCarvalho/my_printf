/*
** my_printf.c for my_printf.c in /home/aidewen/Epitech/Unix System/PSU_2016_my_printf
** 
** Made by Edwin ROCHA CARVALHO
** Login   <aidewen@epitech.net>
** 
** Started on  Wed Nov  9 13:37:53 2016 Edwin ROCHA CARVALHO
** Last update Thu Jun  8 17:49:05 2017 edwin
*/

#include <stdarg.h>
#include "main.h"
#include "macros.h"

t_structure	g_flags[13] = {{'s', display_s},
			       {'S', display_s2},
			       {'%', display_pourcentage},
			       {'c', display_c},
			       {'d', display_di},
			       {'i', display_di},
			       {'u', display_u},
			       {'x', display_x},
			       {'X', display_xmaj},
			       {'o', display_o},
			       {'p', display_p},
			       {'b', display_b}};

void	main_loop(char *format, int i, int j, va_list ap)
{
  while (format[i] != '\0')
    {
      if (format[i] == '%')
	{
	  j = 0;
	  while (g_flags[j].c != '\0')
	    {
	      if (format[i + 1] == g_flags[j].c)
		g_flags[j].function(ap);
	      j = j + 1;
	    }
	  i = i + 1;
	}
      else
	my_putchar(format[i]);
      i = i + 1;
    }
}

int		my_printf(char *format, ...)
{
  va_list	ap;
  int		i;
  int		j;

  va_start(ap, format);
  i = 0;
  j = 0;
  main_loop(format, i, j, ap);
  va_end(ap);
  return (SUCCESS);
}

int	main(void)
{
  my_printf("%s %d %i %c %x %X %u test\n", "test", 1, 2, 'c', 42, 42, 12887238732);
  my_printf("test %d %d %d %d\n", 64, 128, 512, 1024);
  return (0);
}
