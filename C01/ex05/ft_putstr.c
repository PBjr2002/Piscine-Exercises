/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:07:55 by pauberna          #+#    #+#             */
/*   Updated: 2023/07/30 20:00:27 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	num;

	num = 0;
	while (str[num] != 0)
	{
		ft_putchar(str[num]);
		num++;
	}
}

/*int	main(void)
{
	char str[] = "ola estou a testar o programa do exercicio 05!";

	ft_putstr(str);
	return (0);
}*/
