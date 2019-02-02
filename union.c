/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 15:15:58 by tmampuru          #+#    #+#             */
/*   Updated: 2019/02/02 16:40:08 by tmampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_exist(char *s, char c, int i)
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

void	ft_union(char *str, char *s2)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check_exist(str, str[i], i) == 0)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		if (ft_check_exist(s2, s2[j], j) == 0 && ft_check_exist(str, s2[j], i) == 0)
		{
			write(1, &s2[j], 1);
		}
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1,"\n",1);
	return (0);
}
