# CPP01-ex03
NAME			=	so_uncivilized

SRC	=	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp
OBJS			= $(SRC:.cpp=.o)

# Compiler
CXX				=	c++
RM				=	rm -f
CXXFLAGS		=	-Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address

# Colours
RED				=	\033[0;31m
BLUE			=	\033[0;34m
CYAN			=	\033[0;36m
RESET			=	\033[0m

# Rules
all:		$(NAME)
			@printf "$(BLUE)==> $(CYAN)CPP01-ex03 compiled ✅\n\n$(RESET)"

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJS)
			@printf "\n$(BLUE)==> $(RED)Removed CPP01-ex03 🗑️\n$(RESET)"

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all
			@printf "$(BLUE)==> $(CYAN)CPP01-ex03 recompiled 🔄\n$(RESET)"

.PHONY:		all clean fclean re