/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:41:38 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/10 11:33:59 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	n;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	n = 0;
	while (av[1][n] != '\0')
	{
		if ((av[1][n] >= 'A' && av[1][n] <= 'Z') 
			|| (av[1][n] >= 'a' && av[1][n] <= 'z'))
		{
			if (av[1][n] == 'Z' || av[1][n] == 'z')
			{
				av[1][n] = av[1][n] - 25;
			}
			else
			{
				av[1][n] = av[1][n] + 1;
			}
		}
		n++;
	}
	put_str(av[1]);
	return (0);
}
