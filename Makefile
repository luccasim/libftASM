# PRODUCT

NAME		= 	libfts.a
TEST		=	unit_test

# COMPILE

CC			=	gcc $(CFLAGS)
CASM		=	nasm -f macho64
CFLAGS		= 	-Wall -Werror -Wextra

# DIRECTORY

DOBJ 		=	objs/
DSRCS		=	srcs/
DSRCC		=	test/
DINC		=	includes/

# SOURCES

HEAD		=	$(shell find includes -name '*.h' -type f)
SRCS		=	$(shell find srcs -name '*.s' -type f)
OBJS		=	$(patsubst %.s, $(DOBJ)%.o, $(SRCS))
SRCC		=	$(shell find test -name '*.c' -type f)
OBJC		=	$(patsubst %.c, $(DOBJ)%.o, $(SRCC))

# COMMAND

MKD			=	/bin/mkdir -p
RMD			=	/bin/rm -rf

# RULES

all: $(NAME)

$(NAME): $(OBJS) $(HEAD)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	@printf "\033[1m libfts created\n\033[0m"

$(DOBJ)%.o: %.s
	@$(MKD) $(DOBJ)$(DSRCS)
	$(CASM) -o $@ $< -I $(DINC)

$(DOBJ)%.o:%.c
	@$(MKD) $(DOBJ)$(DSRCC)
	$(CC) -o $@ -c $< -I $(DINC)

mytest: $(NAME) $(HEAD) $(OBJC)
	$(CC) -o $(TEST) $(OBJC) -I $(DINC) -L . -lfts

clean:
	$(RMD) $(DOBJ)

fclean: clean
	$(RMD) $(NAME) $(TEST)

re: fclean all

.PHONY: clean fclean re all