NAME						:=		todo_3.0
COMPILER							:=		gcc

SOURCE_DIR					:=		source/
OBJECT_DIR					:=		object/

FLAGS						:=		-Wextra -Werror -Wall 
ADDSAN						:=		-fsanitize=address

SOURCE						:=		$(wildcard $(SOURCE_DIR)*.c)
OBJECTS						:=		$(SOURCE:$(SOURCE_DIR)%.c=$(OBJECT_DIR)%.o)

LINK						:=		$(COMPILER) $(FLAGS) -o $(NAME) $(OBJECTS) $(ADDSAN)

RED     					:=		\033[31m
GREEN   					:=		\033[32m
YELLOW  					:=		\033[33m
BLUE    					:=		\033[34m

all:
							echo "$(BLUE)PLEASE STANDBY...$(GREEN)"
							make $(NAME)

$(NAME): $(OBJECT_DIR) $(OBJECTS)
							echo "$(GREEN)CREATING EXECUTABLE...$(GREEN)"
							$(LINK)

$(OBJECTS): $(OBJECT_DIR)%.o: $(SOURCE_DIR)%.c
							
							echo "$(BLUE)COMPILING OBJECT ($@)$(GREEN)"
							$(COMPILER) $(FLAGS) -g -o $@ -c $<

$(OBJECT_DIR):
							echo "CREATING OBJECT DIRECTORIES...$(GREEN)"
							mkdir -p $(OBJECT_DIR)

clean:
							echo "$(YELLOW)REMOVING OBJECT FILES...$(GREEN)"
							rm -rf $(OBJECT_DIR)
							rm -rf $(NAME).dSYM

fclean: clean
							echo "$(RED)REMOVING EXECUTABLE...$(GREEN)"
							rm -f $(NAME)
							echo "$(BLUE)READY TO PUSH;...$(GREEN)"

re: clean all

.PHONY: clean all
.SILENT: