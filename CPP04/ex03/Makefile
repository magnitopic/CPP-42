# CPP04-ex03
NAME			=	materia

SRC	=	main.cpp 
OBJS			= $(SRC:.cpp=.o)

# Compiler
CXX				=	c++
RM				=	rm -f
CXXFLAGS		=	-Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

# Colours
RED				=	\033[0;31m
BLUE			=	\033[0;34m
CYAN			=	\033[0;36m
RESET			=	\033[0m

# Rules
all:		$(NAME)
			@printf "$(BLUE)==> $(CYAN)CPP04-ex03 compiled ✅\n\n$(RESET)"

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJS)
			@printf "\n$(BLUE)==> $(RED)Removed CPP04-ex03 🗑️\n$(RESET)"

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all
			@printf "$(BLUE)==> $(CYAN)CPP04-ex03 recompiled 🔄\n$(RESET)"

.PHONY:		all clean fclean re