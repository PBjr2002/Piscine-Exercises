/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:17:08 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/06 15:00:38 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	set_signal(char *str, int n, int signal)
{
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

int	check_equal(char *str, int n, int a)
{
	int	b;

	b = 0;
	while (b < a)
	{
		if (str[n] == str[n + 1])
		{
			return (0);
		}
		b++;
	}
	return (1);
}

int	check_error(char *str)
{
	int	a;
	int	b;
	int	n;

	a = ft_strlen(str);
	b = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (a == 1 || a == 0)
		{
			return (0);
		}
		else if (str[n] == '-' || str[n] == '+' || str[n] == 32)
		{
			return (0);
		}
		else if (str[n] >= 9 && str[n] <= 13)
		{
			return (0);
		}
		else if (check_equal(str, n, a) == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	n;
	int	signal;

	n = 0;
	result = 0;
	signal = 0;
	signal = set_signal(str, n, signal);
	if (check_error(base) == 1)
	{
		while (str[n] != '\0')
		{
			if (str[n] >= '0' && str[n] <= '9')
			{
				result = result + str[n] - 48;
				if (str[n + 1] < '0' || str[n + 1] > '9')
					break;
				result = result * 10;
			}
			n++;
		}
		while (result >= ft_strlen(base))
		{
			result = result / ft_strlen(base);
			result = result % ft_strlen(base);
		}
		if (result < ft_strlen(base))
		{
			result = result + base[result];
		}
		return (result);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base(" ---1234abc", "0123456789"));
	return (0);
}
