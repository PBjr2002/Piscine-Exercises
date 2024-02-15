/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:27:45 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/17 13:39:03 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	n;
	int	i;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[n - i], 1);
		i++;;
	}
	write (1, &str[n - i], 1);
	write (1, "\n", 1);
	return (str);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_rev_print(av[1]);
	return (0);
}
