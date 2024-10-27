# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 17:58:31 by seemil            #+#    #+#              #
#    Updated: 2024/02/23 16:58:55 by seemil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
SERVER_C = server.c
CLIENT_C = client.c
SERVER = server
CLIENT = client
SERVER_BONUS_C = server_bonus.c
CLIENT_BONUS_C = client_bonus.c
SERVER_BONUS = server_bonus
CLIENT_BONUS = client_bonus
LIBFT = ./ft_printf/libftprintf.a
LIBFT_DIR = ./ft_printf

all: $(LIBFT) $(SERVER) $(CLIENT)

$(LIBFT):
	make -C ./ft_printf

$(SERVER):
	gcc $(CFLAGS) $(SERVER_C) -L $(LIBFT_DIR) -lftprintf -o server

$(CLIENT):
	gcc $(CFLAGS) $(CLIENT_C) -L $(LIBFT_DIR) -lftprintf -o client

bonus: $(LIBFT) $(SERVER_BONUS) $(CLIENT_BONUS)

$(SERVER_BONUS): 
	gcc $(CFLAGS) $(SERVER_BONUS_C) -L $(LIBFT_DIR) -lftprintf -o server_bonus

$(CLIENT_BONUS):
	gcc $(CFLAGS) $(CLIENT_BONUS_C) -L $(LIBFT_DIR) -lftprintf -o client_bonus

clean:
	rm -f server client
	make clean -C ./ft_printf

cleanbonus: 
	rm -f server_bonus client_bonus
	make clean -C ./ft_printf

fclean: clean
	make fclean -C ./ft_printf

fcleanbonus: cleanbonus
	make fclean -C ./ft_printf

re: fclean all 
	make re -C ./ft_printf

rebonus: fclean bonus 
	make re -C ./ft_printf