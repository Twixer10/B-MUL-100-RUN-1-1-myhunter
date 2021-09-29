##
## EPITECH PROJECT, 2020
## makefile exe
## File description:
## fct
##

SRC	=	$(wildcard *.c) $(wildcard */*.c)

CFLAGS	=	-W -Wextra -Wall -Werror -g3 -g

LFLAGS	=	-L lib/ -lmy -l csfml-audio -l csfml-graphics -l csfml-network -l csfml-system -l csfml-window  

IFLAGS	=	-I include/

NAME	=	my_hunter

all:
	make -C lib/my all
	gcc -o $(NAME) $(SRC) $(IFLAGS) $(LFLAGS) $(CFLAGS)

clean:
	make -C lib/my clean
	rm -f *~
	rm -f *.o

fclean:
	make -C lib/my fclean
	rm -f $(NAME)

re:	fclean all
	make -C lib/my re
