/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:22:00 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/09 13:32:56 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2 && tab[i])
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab [size - i - 1] = temp;
		i++; 
	}
}

/*int	main(void)
{
	int	test;
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	ft_rev_int_tab(tab, 10);
	test = 0;
	while(test < 10)
	{
		printf("%d", tab[test]);
		test++;
	}
	return (0);
}*/
