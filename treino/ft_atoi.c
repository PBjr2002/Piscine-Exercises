/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:47:51 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/10 19:38:05 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	n;
	int	signal;

	n = 0;
	result = 0;
	signal = 1;
	while ((str[n] >= 9 && str[n] <= 13) || str[n] == 32)
		n++;
	if (str[n] == '-')
	{
		signal = signal * -1;
		n++;
	}
	else if (str[n] == '+')
		n++;
	while (str[n] != '\0' && str[n] >= '0' && str[n] <= '9')
	{
		result = result * 10;
		result = result + str[n] - 48;
		n++;
	}
	result = result * signal;
	return (result);
}

/*int	main(void)
{
	char alpha[] = "	-2147483647ab45";
	printf("%d\n", ft_atoi(alpha));
	return (0);
}*/
