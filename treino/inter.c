/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:58:15 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/10 11:33:06 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_equal(char *str, char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	inter(char *alpha, char *beta)
{
	int	n;
	int	i;

	n = 0;
	while (alpha[n] != '\0')
	{
		i = 0;
		while (beta[i] != '\0')
		{
			if (alpha[n] == beta[i])
			{
				if (check_equal(alpha, alpha[n], n) == 0)
				{
					write(1, &alpha[n], 1);
					break ;
				}
			}
			i++;
		}
		n++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
