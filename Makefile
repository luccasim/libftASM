NAME		= 	libfts.a

# COMPILE
CASM		=	nasm -f macho64

# DIRECTORY
DOBJ 		=	objs/
DSRC		=	srcs/
DINC		=	includes/

# SOURCES
INC			=	$(shell find includes -name '*.h' -type f)
SRCS		=	$(shell find srcs -name '*.s' -type f)
OBJS		=	$(patsubst %.s, $(DOBJ)%.o, $(SRCS))

# COMMAND
MKD		=	/bin/mkdir -p
RMD		=	/bin/rm -rf

# RULES
all: $(NAME)

$(NAME): $(OBJS) $(INC)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	@printf "\033[1m libfts created\n\033[0m"

$(DOBJ)%.o: %.s
	$(MKD) $(DOBJ)$(SRCS)
	$(CASM) -o $@ $<

x:
	$(CC) test/main.c -I $(DINC) -L . -lfts

clean:
	$(RMD) $(DOBJ)

fclean: clean
	$(RMD) $(NAME)

.PHONY: clean fclean re all