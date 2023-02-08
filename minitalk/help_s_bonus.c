/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_s.bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:55:54 by aaouassa          #+#    #+#             */
/*   Updated: 2023/02/02 12:25:59 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_putnbr(int n)
{
	long long int	j;

	j = n;
	if (j < 0)
	{
		ft_putchar('-');
		j = -j;
	}
	if (j > 9)
	{
		ft_putnbr(j / 10);
		ft_putnbr(j % 10);
	}
	else
	{
		ft_putchar(j + '0');
	}
}
