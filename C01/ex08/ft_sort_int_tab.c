/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:17:27 by pauberna          #+#    #+#             */
/*   Updated: 2023/07/30 19:16:06 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	num;
	int	a;

	a = 0;
	num = 0;
	while (num < size && tab[a])
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				ft_swap(&tab[a], &tab[a + 1]);
			}
			a++;
		}
		num++;
	}
}

/*int	main(void)
{
	int	tab[] = {10, 5, 7, 6, 4, 8, 1, 9, 2, 3};
	int	i = 0;

	ft_sort_int_tab(tab, 10);
	while(i < 10)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
