/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:37:31 by pauberna          #+#    #+#             */
/*   Updated: 2023/07/27 16:43:19 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	organiza_num(int i)
{
	int	num_1;
	int	num_2;

	num_1 = (i / 10) + 48;
	num_2 = (i % 10) + 48;
	print_char(num_1);
	print_char(num_2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			organiza_num(a);
			print_char(' ');
			organiza_num(b);
			if (a < 98)
			{
				print_char(',');
				print_char(' ');
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
