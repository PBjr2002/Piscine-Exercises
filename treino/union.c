/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:10:49 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/16 18:04:06 by pauberna         ###   ########.fr       */
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
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	verify_str(char *str, char c)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] == c)
		{
			return (1);
		}
		n++;
	}
	return (0);
}

void	putstr(char *alpha, char *beta)
{
	int	n;

	n = 0;
	while (alpha[n] != '\0')
	{
		if (verify_doubles(alpha, alpha[n], n) == 0)
		{
			write (1, &alpha[n], 1);
		}
		n++;
	}
	n = 0;
	while (beta[n] != '\0')
	{
		if ((verify_doubles(beta, beta[n], n) == 0) 
			&& (verify_str(alpha, beta[n]) == 0))
		{
			write (1, &beta[n], 1);
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
	putstr(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
