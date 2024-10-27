/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:59:00 by seemil            #+#    #+#             */
/*   Updated: 2024/02/20 18:44:41 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bit_handler(int sig_num)
{
	static int	result;
	static int	shift;

	if (sig_num == SIGUSR1)
		result += 1 << (7 - shift);
	shift++;
	if (shift == 8)
	{
		write(1, &result, 1);
		result = 0;
		shift = 0;
	}
}

int	main(void)
{
	ft_printf("\nWELCOME TO SERVER\n\nSERVER PID : %d\n", getpid());
	ft_printf("\n...Waiting for signal...\n");
	signal(SIGUSR1, bit_handler);
	signal(SIGUSR2, bit_handler);
	while (1)
		pause();
	return (0);
}
