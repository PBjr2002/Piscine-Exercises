/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:56:18 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/07 14:17:36 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	result;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	result = 2;
	if (nb >= 2)
	{
		while (result * result <= nb)
		{
			if (result * result == nb)
			{
				return (result);
			}
			result++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(2147483646));
	return (0);
}*/
