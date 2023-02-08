/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:40:08 by aaouassa          #+#    #+#             */
/*   Updated: 2023/02/02 16:33:02 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(char *str)
{
	int				i;
	int				neg;
	long long int	rst;

	i = 0;
	neg = 1;
	rst = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (i[str] == '-')
			neg = neg * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		rst = (rst * 10) + (str[i] - '0');
		i++;
	}
	if (LLONG_MAX < rst && neg == 1)
		return (-1);
	else if (LLONG_MAX < rst && neg == -1)
		return (0);
	return (neg * rst);
}

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
}
