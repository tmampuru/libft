/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 10:34:10 by tmampuru          #+#    #+#             */
/*   Updated: 2019/02/03 14:50:42 by tmampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_exist(char *s, char c, int i)
{
	int x;

	x = 0;
	while (x < i)
	{
		if (s[x] == c)
		{
			return (1);
		}
		x++;
	}
	return (0);
}

void	inter(char *str, char *s2)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (ft_check_exist(str, str[i], i) == 0 && s2[j] == str[i])
			{
				write(1, &str[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
