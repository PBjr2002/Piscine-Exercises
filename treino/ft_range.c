/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:07:02 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/16 18:25:32 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	len;
	int	n;

	len = end - start;
	array = (int *)malloc(sizeof(int) * len + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (start <= end)
	{
		array[n] = start;
		start++;
		n++;
	}
	return (array);
}

int	main(void)
{
	int	*num;
	int	min;
	int	max;
	int	n;

	min = 10;
	max = 20;
	n = 0;
	num = ft_range(min, max);
	while (n < (max - min + 1))
	{
		printf("%d ", num[n]);
		n++;
	}
	return (0);
}
