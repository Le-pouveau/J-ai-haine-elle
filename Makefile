#ifndef GNL_H_
#define GNL_H_

NAME= getnextline.a

SOURCES= get_next_line.c \
get_next_line_utils.c \

OBJS=	$(SOURCES:.c=.o)

BONUS=

BONUS_OBJ= $(BONUS:.c=.o)

FLAGS=	-Wall -Werror -Wextra

all:$(NAME)

$(NAME):$(OBJS)
	ar crs $(NAME) $(OBJS)

.c.o:
	gcc $(FLAGS) -c -D BUFFER_SIZE=10 $< -o $(<:.c=.o)
clean :
	rm -rf $(OBJS) $(BONUS_OBJ)

fclean : clean
	rm -rf $(NAME)
re : fclean all

bonus:$(BONUS_OBJ)
	ar crs $(NAME) $(BONUS_OBJ)

.PHONY : all clean fclean re

#endif
