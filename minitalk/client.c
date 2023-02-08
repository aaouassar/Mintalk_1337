/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 04:19:13 by aaouassa          #+#    #+#             */
/*   Updated: 2023/02/06 11:56:18 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sent(int pid, char c)
{
	int	i;
	int	err;

	i = 0;
	while (i < 8)
	{
		if ((c & 1 << i) != 0)
			err = kill(pid, SIGUSR1);
		else
			err = kill(pid, SIGUSR2);
		if (err < 0)
		{
			ft_putstr("Invalid PID\n");
			exit(EXIT_FAILURE);
		}
		usleep(300);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	if (ac != 3)
		ft_putstr("You should past 3 argument");
	else
	{
		pid = ft_atoi(av[1]);
		if (pid < 1)
		{
			ft_putstr("PID should be greater than 0\n");
			exit(EXIT_FAILURE);
		}
		while (av[2][i])
		{
			ft_sent(pid, av[2][i]);
			i++;
		}
	}
}
