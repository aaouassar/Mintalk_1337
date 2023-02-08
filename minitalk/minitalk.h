/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:15:05 by aaouassa          #+#    #+#             */
/*   Updated: 2023/01/25 10:41:20 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdlib.h>
# include <signal.h>
# include <unistd.h>
# include <limits.h>

void	ft_putstr(char *s);
void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int n);
void	ft_sent(int pid, char c);
void	ft_sig(int sig);

#endif