/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:44:07 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/07 15:29:42 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	long	prime;
	long	n;

	n = 2;
	prime = 0;
	if (nb < 2)
	{
		return (2);
	}
	while (n * n <= nb)
	{
		if (nb % n == 0)
		{
			prime = ft_find_next_prime(nb + 1);
			return (prime);
		}
		n++;
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(-2147483648));
	return (0);
}*/
