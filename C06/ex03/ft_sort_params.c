/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:03:51 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/08 11:38:48 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_cmp(char *av1, char *av2)
{
	int	i;

	i = 0;
	while (av1[i] != '\0' || av2[i] != '\0')
	{
		if (av1[i] == av2[i])
		{
			i++;
		}
		else if (av1[i] < av2[i] || av1[i] > av2[i])
		{
			return (av1[i] - av2[i]);
		}
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(int i, int ac, char **av)
{
	int	n;

	while (i < ac)
	{
		n = 0;
		while (av[i][n] != '\0')
		{
			write (1, &av[i][n], 1);
			n++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	a;

	a = 1;
	while (a < ac)
	{
		i = 1;
		while (i < ac - 1)
		{
			if (ft_cmp(av[i], av[i + 1]) > 0)
				ft_swap(&av[i], &av[i + 1]);
			i++;
		}
		a++;
	}
	i = 1;
	ft_putstr(i, ac, av);
	return (0);
}
