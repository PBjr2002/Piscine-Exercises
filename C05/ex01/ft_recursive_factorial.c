/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:39:02 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/06 20:05:19 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb > 0) 
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(6));
	return (0);
}*/
