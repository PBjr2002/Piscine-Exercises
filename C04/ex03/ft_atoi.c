/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:01:02 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/08 10:38:17 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	set_signal(char *str, int n)
{
	int	signal;

	signal = 0;
	while (str[n] != '\0')
	{
		if (str[n] == '-')
		{
			signal++;
		}
		else if (str[n] >= '0' && str[n] <= '9')
		{
			return (signal);
		}
		n++;
	}
	return (signal);
}

int	ft_atoi(char *str)
{
	int	result;
	int	n;
	int	int_signal;

	n = 0;
	result = 0;
	int_signal = set_signal(str, n);
	while ((str[n] >= 9 && str[n] <= 13) || str[n] == 32)
		n++;
	while (str[n] == '-' || str[n] == '+')
		n++;
	while (str[n] != '\0' && str[n] >= '0' && str[n] <= '9')
	{
		result = result + str[n] - 48;
		if (str[n + 1] < '0' || str[n + 1] > '9')
			break ;
		result = result * 10;
		n++;
	}
	if (int_signal % 2 != 0)
		result = -result;
	return (result);
}

/*int	main(void)
{
	char	alpha[] = "  \t-----12345a48858ab";
	printf("%d\n", ft_atoi(alpha));
	return (0);
}*/
