/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:23:09 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/16 16:45:47 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_numlen(long num)
{
	int	n;

	n = 0;
	if (num < 0)
	{
		num = -num;
		n = n + 1;
	}
	while (num > 9)
	{
		num = num / 10;
		n++;
	}
	n = n + 1;
	return (n);
}

char	*ft_itoa(int nbr)
{
	char	*result;
	int		n;

	n = ft_numlen(nbr);
	result = (char *)malloc((sizeof(char)) * (ft_numlen(nbr) + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	n--;
	result[n] = '\0';
	while (nbr > 9)
	{
		result[n] = (nbr % 10) + 48;
		nbr = nbr / 10;
		n--;
	}
	result[n] = nbr + 48;
	return (result);
}

int	main(void)
{
	int	num;

	num = 1234;
	printf("%s\n", ft_itoa(num));
	return (0);
}
