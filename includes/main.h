/*
** main.h for Printf in /home/aidewen/Epitech/Unix System/Printf
** 
** Made by Edwin ROCHA CARVALHO
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Thu Nov 10 18:13:27 2016 Edwin ROCHA CARVALHO
** Last update Thu Jun  8 17:38:49 2017 edwin
*/

#ifndef MAIN_H_
# define MAIN_H_

# include <stdarg.h>

typedef void(*return_fonction)(va_list ap, ...);

typedef struct		s_structure
{
  char			c;
  return_fonction	function;
}			t_structure;

void	my_putchar(char c);
char	*my_strcpy(char *dest, char *src);
void	my_putstr(char *str);
int	my_strlen(char *str);
void	my_put_nbr(int nb);
int	my_printf(char *format, ...);
void	my_put_un_nbr(unsigned int nb);
int	my_nbrbase(unsigned int nb, char *base);
int	my_nbrb(unsigned int nb, char *base);
int	my_nbrpoint(unsigned int nb, char *base);
void	my_putstr_case_s2(char *str);
void	display_c(va_list ap, ...);
void	display_pourcentage(va_list ap, ...);
void	display_s(va_list ap, ...);
void	display_s2(va_list ap, ...);
void	display_o(va_list ap, ...);
void	display_u(va_list ap, ...);
void	display_x(va_list ap, ...);
void	display_xmaj(va_list ap, ...);
void	display_di(va_list ap, ...);
void	display_b(va_list ap, ...);
void	display_p(va_list ap, ...);
void	my_printprct();

#endif /* !MAIN_H_ */
