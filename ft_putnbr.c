/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 13:06:14 by tmampuru          #+#    #+#             */
/*   Updated: 2019/02/03 14:16:25 by tmampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int c;

	if (nb < 0)
	{
		ft_putchar("-");
		nb = -nb;
	}
	if (nb >= 10)
	{
		c = nb / 10;
		ft_putnbr(c);
		c = nb % 10;
		ft_putnbr(c);
	}
	else
	{
		nb = nb + 48;
		ft_putchar(nb);
	}
}

int		main(void)
{
	int x;

	x = -25731;
	ft_putnbr(x);
	return (0);
}
