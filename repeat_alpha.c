/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 11:49:47 by tmampuru          #+#    #+#             */
/*   Updated: 2019/02/01 12:41:19 by tmampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int index; 

	i = 0;
	if (argc != 2)
	{
		write(1,"\n",1);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
			{
				index = argv[1][i] - 96;
				while (index > 0)
				{
					write(1, &argv[1][i], 1);
					index--;
				}
			}
			i++;
		}		
	}	
	return (0);
}
