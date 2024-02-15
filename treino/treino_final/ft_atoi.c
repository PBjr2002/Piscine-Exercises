/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:10:15 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/17 15:26:55 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	num;
	int	n;
	int	signal;

	n = 0;
	num = 0;
	signal = 1;
	while ((str[n] >= 9 && str[n] <= 13) || str[n] == 32)
		n++;
	if (str[n] == '-')
	{
		signal = -signal;
		n++;
	}
	else if (str[n] == '+')
		n++;
	while (str[n] >= '0' && str[n] <= '9')
	{
		num = num * 10;
		num = num + str[n] - 48;
		n++;
	}
	num = num * signal;
	return (num);
}

int	main(void)
{
	char	alpha[] = "  -123 4abc";

	printf ("%d\n", ft_atoi(alpha));
	return (0);
}
