/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:43:14 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/15 15:07:36 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

int	*ft_range(int min, int max)
{
	int	*array;
	int	n;

	array = (int *)malloc(sizeof(int) * (max - min));
	if (max <= min)
		return (NULL);
	if (array == NULL)
		return (NULL);
	n = 0;
	while (max > min)
	{
		array[n] = min;
		min++;
		n++;
	}
	return (array);
}

int	main(void)
{
	int	*num;
	int	max;
	int	min;
	int	n;

	min = 200;
	max = 250;
	num = ft_range(min, max);
	n = 0;
	while (n < (max - min))
	{
		printf("%d ", num[n]);
		n++;
	}
	printf("\n");
	return (0);
}
