libft.a:
	gcc -Wall -Wextra -Werror -c *.c
	ar rc libft.a *.o
clean:
	rm *.o
fclean:
	rm *.o
	rm libft.a
re:
	fclean
	libft.a
all:
	libft.a