/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:55:42 by aaouassa          #+#    #+#             */
/*   Updated: 2023/02/03 12:35:29 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sig(int sig)
{
	static int				i;
	static unsigned char	j;

	if (sig == SIGUSR1)
		j |= (1 << i);
	i++;
	if (i == 8)
	{
		ft_putchar(j);
		i = 0;
		j = 0;
	}
}

int	main(void)
{
	int	pid;

	signal(SIGUSR1, ft_sig);
	signal(SIGUSR2, ft_sig);
	pid = getpid();
	ft_putstr("server pid is : ");
	ft_putnbr(pid);
	ft_putchar('\n');
	while (1)
	{
		pause();
	}
}
