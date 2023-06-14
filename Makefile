NAME			= so_long
SRC_DIR 		= src
SRCS			= $(wildcard $(SRC_DIR)/*.c)
HEADERS			= $(wildcard includes/*.h)
OBJ_DIR			= obj
OBJS			= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))
MLXDIR			= minilibx-linux
INCS			= -Iincludes -I$(MLXDIR)
CC				= cc 
LINKERS			= -L$(MLXDIR) -lmlx -lXext -lX11
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror #-fsanitize=address -g
MK				= mkdir -p

ifeq ($(shell uname -s), Darwin)
	LINKERS	= -L$(MLXDIR) -lmlx -framework  OpenGL -framework AppKit
	MLXDIR	=	minilibx-mac
endif


all:			mlx $(OBJ_DIR) $(NAME)

mlx:
	make all -C $(MLXDIR)

$(OBJ_DIR): $(SRC_DIR)
	$(MK) $(OBJ_DIR)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c $(HEADERS) Makefile
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(INCS) -o $(NAME) $(OBJS) $(LINKERS)

clean:			
				$(RM) $(OBJ_DIR)
				make clean -C $(MLXDIR)

fclean:			clean
				$(RM) $(NAME)
				
re:				fclean all

.PHONY:			all clean fclean re bonus mlx
