/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 13:06:14 by tmampuru          #+#    #+#             */
/*   Updated: 2019/01/27 14:02:47 by tmampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if ( nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
	}
	if ( nb >= 10)
	{
		int c;

		c = nb / 10;
		ft_putnbr(c);
		c = nb % 10;
		ft_putnbr(c);
	}
	else
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
}

int		main(void)
{
	int x;

	x = -25731;
	ft_putnbr(x);
	return (0);
}
