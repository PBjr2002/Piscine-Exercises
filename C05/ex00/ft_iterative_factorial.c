/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interative_factorial.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:05:39 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/06 19:32:54 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(3));
	return (0);
}*/
