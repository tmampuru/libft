/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 09:52:31 by tmampuru          #+#    #+#             */
/*   Updated: 2019/02/01 11:04:07 by tmampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void aff_a(char *str)
{
	int i;

	i = 0;
	while(str != '\0')
	{
		if (str[i] == 'a')
		{
			write(1,"a\n",2);
			i++;
		}
		else
		{
			write(1,"\n",1);
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		write(1,"a\n",2);
	else
	{
		aff_a(argv[1]);
	}
	return (0);
}
