/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:48:56 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/17 10:52:05 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n <= 57)
	{
		write (1, &n, 1);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
