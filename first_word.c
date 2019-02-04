/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:03:43 by tmampuru          #+#    #+#             */
/*   Updated: 2019/02/04 10:48:46 by tmampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' )
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2 || argc < 1)
	{
		write(1, "\n", 1);
	}
	else
	{
		first_word(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
