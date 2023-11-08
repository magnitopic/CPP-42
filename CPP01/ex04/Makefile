# CPP01-ex04
NAME			=	files

SRC	=	main.cpp
OBJS			= $(SRC:.cpp=.o)

# Compiler
CC				=	c++
RM				=	rm -f
CFLAGS			=	-std=c++98 -Wall -Werror -Wextra -g3 -fsanitize=address

# Colours
RED				=	\033[0;31m
BLUE			=	\033[0;34m
CYAN			=	\033[0;36m
RESET			=	\033[0m

# Rules
all:		$(NAME)
			@printf "$(BLUE)==> $(CYAN)CPP01-ex04 compiled ✅\n\n$(RESET)"

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJS)
			@printf "\n$(BLUE)==> $(RED)Removed CPP01-ex04 🗑️\n$(RESET)"

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all
			@printf "$(BLUE)==> $(CYAN)CPP01-ex04 recompiled 🔄\n$(RESET)"

.PHONY:		all clean fclean re