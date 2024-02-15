/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:18:37 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/07 14:39:19 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	n;

	n = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (n * n <= nb)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
}*/
