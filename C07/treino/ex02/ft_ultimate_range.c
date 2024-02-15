/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:16:12 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/15 15:42:48 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	n;

	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (-1);
	if (max <= min)
	{
		*range = NULL;
		return (0);
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

int	main(void)
{
	int	*num;
	int	min;
	int	max;

	min = 200;
	max = 205;
	printf ("%d\n", ft_ultimate_range(&num, min, max));
	return (0);
}
