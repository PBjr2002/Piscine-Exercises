/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:16:13 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/17 16:32:31 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	n;
	int	len;

	len = end - start;
	if (len < 0)
		len = -len;
	array = (int *)malloc(sizeof(int) * len + 1);
	if (array == NULL)
		return (NULL);
	n = 0;
	if (start < end)
	{
		while (start <= end)
		{
			array[n] = start;
			start++;
			n++;
		}
	}
	else if (end < start)
	{
		while (end <= start)
		{
			array[n] = end;
			end++;
			n++;
		}
	}
	return (array);
}

int	main(void)
{
	int	n;
	int	min;
	int	max;
	int	*num;

	min = 0;
	max = -3;
	n = 0;
	num = ft_range(min, max);
	while (min >= max)
	{
		printf("%d\n", num[n]);
		max++;
		n++;
	}
	return (0);
}
