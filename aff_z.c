/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 15:18:12 by tmampuru          #+#    #+#             */
/*   Updated: 2019/02/03 15:36:36 by tmampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_z(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'z')
		{
			write(1, "z", 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "z", 1);
	}	
	else if (argc == 3)
	{
		aff_z(argv[1]);
	}
	else
	{
		write(1, "z", 1);
	}
	write(1, "\n", 1);
	return (0);
}
