/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:06:22 by seemil            #+#    #+#             */
/*   Updated: 2024/02/23 17:19:32 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <unistd.h>
# include <signal.h>
# include "ft_printf/ft_printf.h"

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ok_handler(int sig_num);
void	send_bit(int pid, char str);
void	handler(int sig_num, siginfo_t *info, void *usless);

#endif
