/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:53:26 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/17 13:22:12 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int	n;
	int	num_1;
	int	num_2;

	n = 1;
	num_1 = 0;
	num_2 = 0;
	while (n <= 100)
	{
		num_1 = 0;
		num_2 = 0;
		if (n % 3 == 0 && n % 5 == 0)
		{
			write (1, "fizzbuzz", 9);
		}
		else if (n % 3 == 0 && n % 5 != 0)
		{
			write (1, "fizz", 5);
		}
		else if (n % 3 != 0 && n % 5 == 0)
		{
			write (1, "buzz", 5);
		}
		else
		{
			if (n > 9)
			{
				num_1 = (n / 10) + 48;
				num_2 = (n % 10) + 48;
				write (1, &num_1, 1);
				write (1, &num_2, 1);
			}
			else
			{
				num_1 = n + 48;
				write (1, &num_1, 1);
			}
		}
		write (1, "\n", 1);
		n++;
	}
	return (0);
}
