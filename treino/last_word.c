/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:36:41 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/10 15:02:59 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

void	last_word(char *str)
{
	int	len;

	len = str_len(str);
	len = len - 1;
	while (str[len] == 32 || str[len] == '\t')
	{
		len--;
	}
	while (len > 0)
	{
		if (str[len] == 32 || str[len] == '\t')
		{
			break ;
		}
		len--;
	}
	len = len + 1;
	while (str[len] != '\0' && str[len] != 32 && str[len] != '\t')
	{
		write(1, &str[len], 1);
		len++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
