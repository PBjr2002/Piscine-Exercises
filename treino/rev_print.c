/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:11:44 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/03 11:52:30 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char *a, char *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

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

char	*ft_rev_print(char *str)
{
	int	n;
	int	size;

	n = 0;
	size = ft_strlen(str);
	while (n < size / 2)
	{
		ft_swap(str[n], str[size - n - 1]);
		n++;
	}
	n = 0;
	while (n < size)
	{
		write(1, &str[n], 1);
		n++;
	}
	write(1, "\n", 1);
	return (str);
}
