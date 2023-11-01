# CPP-00
NAME			=	megaphone

SRC	=	megaphone.cpp

OBJS			= $(SRC:.cpp=.o)

# Compiler
CC				=	c++
RM				=	rm -f
CFLAGS			=	-std=c++98 -Wall -Werror -Wextra #-g3 -fsanitize=address

# Colours
RED				=	\033[0;31m
GREEN			=	\033[0;32m
YELLOW			=	\033[0;33m
BLUE			=	\033[0;34m
PURPLE			=	\033[0;35m
CYAN			=	\033[0;36m
WHITE			=	\033[0;37m
RESET			=	\033[0m

# Rules
all:		$(NAME)
			@printf "$(BLUE)==> $(CYAN)CPP-00 compiled ✅\n\n$(RESET)"

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJS)
			@printf "\n$(BLUE)==> $(RED)Removed CPP-00 🗑️\n$(RESET)"

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all
			@printf "$(BLUE)==> $(CYAN)CPP-00 recompiled 🔄\n$(RESET)"

.PHONY:		all clean fclean re