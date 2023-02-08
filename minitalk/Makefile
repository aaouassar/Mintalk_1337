NAME_C = client
NAME_S = server

NAME_C_BONUS = client_bonus
NAME_S_BONUS = server_bonus

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC_C = client.c help_c.c
SRC_S = server.c help_s.c

SRC_C_BONUS = client_bonus.c help_c_bonus.c
SRC_S_BONUS = server_bonus.c help_s_bonus.c

OBJS_C = $(SRC_C:.c=.o)
OBJS_S = $(SRC_S:.c=.o)

OBJS_C_BONUS = $(SRC_C_BONUS:.c=.o)
OBJS_S_BONUS = $(SRC_S_BONUS:.c=.o)

all : $(NAME_C) $(NAME_S) 

$(NAME_C) : $(OBJS_C)
	cc $(CFLAGS) -o $(NAME_C) $(OBJS_C)

$(NAME_S) : $(OBJS_S)
	cc $(CFLAGS) -o $(NAME_S) $(OBJS_S)

bonus : $(NAME_C_BONUS) $(NAME_S_BONUS)

$(NAME_C_BONUS) : $(OBJS_C_BONUS)
	cc $(CFLAGS) -o $(NAME_C_BONUS) $(OBJS_C_BONUS)

$(NAME_S_BONUS) : $(OBJS_S_BONUS)
	cc $(CFLAGS) -o $(NAME_S_BONUS) $(OBJS_S_BONUS)

clean : 
	$(RM) $(OBJS_C) $(OBJS_S) $(OBJS_C_BONUS) $(OBJS_S_BONUS)

fclean : clean
	$(RM) $(NAME_C) $(NAME_S) $(NAME_C_BONUS) $(NAME_S_BONUS)
	
re : fclean all bonus