/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:55:43 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/04 16:00:04 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		write(1, &str[num], 1);
		num++;
	}
}

/*int	main(void)
{
	char	alpha[] = "testar o programa";

	ft_putstr(alpha);
	return (0);
}*/
