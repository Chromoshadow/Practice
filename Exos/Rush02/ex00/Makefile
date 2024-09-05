# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tniambi- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 21:27:12 by tniambi-          #+#    #+#              #
#    Updated: 2024/09/01 21:55:02 by tniambi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rush-02 : main.o allocation_memoire.o argument.o calc2.o calc.o put_str_char.o tools.o
	cc -o rush-02 main.o allocation_memoire.o argument.o calc2.o calc.o put_str_char.o tools.o
main.o : main.c
	cc -o main.o -c main.c -Wall -Werror -Wextra
allocation_memoire.o : allocation_memoire.c
	cc -o allocation_memoire.o -c allocation_memoire.c -Wall -Werror -Wextra
argument.o : argument.c
	cc -o argument.o -c argument.c -Wall -Werror -Wextra
calc2.o : calc2.c
	cc -o calc2.o -c calc2.c -Wall -Werror -Wextra
calc.o : calc.c
	cc -o calc.o -c calc.c -Wall -Werror -Wextra
put_str_char.o : put_str_char.c
	cc -o put_str_char.o -c put_str_char.c -Wall -Werror -Wextra
tools.o : tools.c
	cc -o tools.o -c tools.c -Wall -Werror -Wextra
fclean :
	rm -f main.o allocation_memoire.o argument.o calc2.o calc.o put_str_char.o tools.o
