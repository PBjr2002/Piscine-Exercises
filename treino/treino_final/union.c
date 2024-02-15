/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:27:33 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/17 15:57:32 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	verify_doubles(char *str, char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	verify_str(char *str, char c)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] == c)
			return (0);
		n++;
	}
	return (1);
}

void	ft_union(char *alpha, char *beta)
{
	int	n;

	n = 0;
	while (alpha[n] != '\0')
	{
		if (verify_doubles(alpha, alpha[n], n) == 1)
			write (1, &alpha[n], 1);
		n++;
	}
	n = 0;
	while (beta[n] != '\0')
	{
		if ((verify_doubles(beta, beta[n], n) == 1)
			&& verify_str(alpha, beta[n]) == 1)
			write (1, &beta[n], 1);
		n++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_union(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
