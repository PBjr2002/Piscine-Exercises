/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmath.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:27:23 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/10 18:41:18 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

void	wdmath(char *src, char *to_find)
{
	int	n;
	int	i;
	int	len;

	n = 0;
	len = 0;
	i = 0;
	while (src[n] != '\0')
	{
		i = 0;
		while (to_find[i] != '\0')
		{
			if (src[n] == to_find[i])
			{
				len++;
				break ;
			}
			i++;
		}
		n++;
	}
	i = 0;
	if (len == ft_strlen(to_find))
	{
		while (to_find[i] != '\0')
		{
			write (1, &to_find[i], 1);
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	wdmath(av[2], av[1]);
	write (1, "\n", 1);
	return (0);
}
