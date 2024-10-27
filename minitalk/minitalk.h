/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:59:05 by seemil            #+#    #+#             */
/*   Updated: 2024/02/20 18:54:05 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include "ft_printf/ft_printf.h"

void	bit_handler(int sig_num);
void	send_bit(int pid, char str);
int		ft_atoi(char *str);

#endif
