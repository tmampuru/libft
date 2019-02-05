/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 08:13:58 by tmampuru          #+#    #+#             */
/*   Updated: 2019/02/05 08:22:44 by tmampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	char a;
	int arrays[8];

	arrays[8] = {0,0,0,0,0,0,0,0};
	while (i < 8)
	{
		arrays[i] =  % 2;
		arrays[i] =  / 2;
		i++;
	}
	while (i > 0)
	{
		a = arrays[i] + 48;
		write(1, &a, 1);
		i--;
	}
}

int main(void)
{
	print_bits(2);
	return (0);
}
