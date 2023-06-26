
VAL 		:= valgrind -s --leak-check=full --show-leak-kinds=all
RUN 		:= ./ahpoly

GREEN 		:= \033[0;32m
RED 		:= \033[0;31m
RESET_COL 	:= \033[0m

NAME 		:= ahpoly
CC 			:= c++
CFLAGS 		:= -Wall -Werror -Wextra -std=c++98
SRC 		:=	ahpolymorphism.cpp \
				Sample.class.cpp

all: $(NAME)

$(NAME): $(SRC)
	@echo "$(RED)Compiling $(NAME)...$(RESET_COL)"
	$(CC) $(CFLAGS) $^ -o $@
	@echo "$(GREEN) $(NAME)!$(RESET_COL)"

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

val:
	$(VAL) $(RUN)

test:
	$(RUN) "shhhhh... I think the students are asleep..."
	$(RUN) Damnit " ! " "Sorry students, I thought this thing was off."
	$(RUN)

.PHONY: all clean fclean re