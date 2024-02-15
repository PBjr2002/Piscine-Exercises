/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:28:52 by pauberna          #+#    #+#             */
/*   Updated: 2023/07/30 19:10:21 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main(void)
{
	int	fnum_1;
	int	fnum_2;

	fnum_1 = 8;
	fnum_2 = 14;
	printf("%d %d\n", fnum_1, fnum_2);
	ft_swap(&fnum_1, &fnum_2);
	printf("%d %d\n", fnum_1, fnum_2);
	return (0);
}*/
