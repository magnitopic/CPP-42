# CPP06-ex00
NAME			=	scalarConverter

SRC	=	main.cpp \
		ScalarConverter.cpp \
		getType.cpp \
		checkValues.cpp
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
			@printf "$(BLUE)==> $(CYAN)CPP06-ex00 compiled ✅\n\n$(RESET)"

$(NAME):	$(OBJS)
			@$(CXX) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJS)
			@printf "\n$(BLUE)==> $(RED)Removed CPP06-ex00 🗑️\n$(RESET)"

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all
			@printf "$(BLUE)==> $(CYAN)CPP06-ex00 recompiled 🔄\n$(RESET)"

.PHONY:		all clean fclean re
