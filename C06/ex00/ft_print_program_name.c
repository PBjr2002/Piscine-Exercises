/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:40:26 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/07 18:46:39 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	n;

	n = 0;
	while (av[0][n] != '\0' && ac == 1)
	{
		write (1, &av[0][n], 1);
		n++;
	}
	write (1, "\n", 1);
	return (0);
}