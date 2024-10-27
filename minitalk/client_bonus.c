/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:04:54 by seemil            #+#    #+#             */
/*   Updated: 2024/02/23 17:12:45 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	g_counter;

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ok_handler(int sig_num)
{
	if (sig_num == SIGUSR1)
		g_counter--;
	if (g_counter == 0)
		ft_printf("🥳.OKEY.MESSAGE RECEIVED🥳\n");
}

void	send_bit(int pid, char str)
{
	int	shift;

	shift = 0;
	while (shift < 8)
	{
		if ((str << shift) & 128)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		shift++;
	}
}

int	main(int args, char **argv)
{
	char	*str;
	int		i;
	int		pid;

	i = 0;
	signal(SIGUSR1, ok_handler);
	if (args == 3)
	{
		pid = ft_atoi(argv[1]);
		g_counter = ft_strlen(argv[2]);
		str = argv[2];
		while (str[i])
		{
			send_bit(pid, str[i]);
			i++;
		}
	}
	else
		ft_printf("ERROR: invalid arguments.\n./client <PID> <message>");
	return (0);
}
