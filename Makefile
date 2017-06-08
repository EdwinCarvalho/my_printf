##
## Makefile for Makefile in /home/aidewen/Epitech/Unix System/PSU_2016_my_printf
## 
## Made by Edwin ROCHA CARVALHO
## Login   <aidewen@epitech.net>
## 
## Started on  Thu Nov 10 18:15:59 2016 Edwin ROCHA CARVALHO
## Last update Thu Jun  8 17:46:47 2017 edwin
##

RM	=	rm -f
LIB	=	ar rc

CFLAGS	+=	-Wextra -Wall -Werror
CFLAGS	+=	-Iincludes/

NAME	=	libmy.a
SOURCE	=	./sources/

SRCS	=	$(SOURCE)tools_1.c	\
		$(SOURCE)tools_2.c	\
		$(SOURCE)display.c	\
		$(SOURCE)display2.c	\
		$(SOURCE)display3.c	\
		$(SOURCE)main.c

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
