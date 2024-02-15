/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:10:38 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/13 15:00:32 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	n;

	n = 0;
	array = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		array[n] = min;
		min++;
		n++;
	}
	return (array);
}

/*int	main(void)
{
	int	*alpha;
	int	n;
	int	min;
	int	max;

	min = 240;
	max = 300;
	alpha = ft_range(min, max);
	n = 0;
	while (n < max - min)
	{
		printf ("%d ", alpha[n]);
		n++;
	}
	printf("\n");
	return (0);
}*/
