/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:00:59 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/07 11:17:50 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power > 1)
	{
		result = nb * ft_recursive_power(result, power - 1);
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_power(7, 5));
	return (0);
}*/
