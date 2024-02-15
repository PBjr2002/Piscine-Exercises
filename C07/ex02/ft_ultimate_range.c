/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:02:25 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/13 16:25:34 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	n;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		return (-1);
	}
	n = 0;
	while (min < max)
	{
		array[n] = min;
		min++;
		n++;
	}
	*range = array;
	return (n);
}

/*int	main(void)
{
	int	*alpha;
	int	min;
	int	max;

	min = 0;
	max = 10;
	printf ("%d\n", ft_ultimate_range(&alpha, min, max));
	return (0);
}*/
