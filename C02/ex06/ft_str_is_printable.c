/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:57:43 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/01 12:59:27 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if (str[n] < 32 || str[n] == 127)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/*int	main(void)
{
	char	alpha[] = {'y', '!', '?'};
	char	beta[] = {'u', 'P', '!', 22};

	printf("%d\n", ft_str_is_printable(alpha));
	printf("%d\n", ft_str_is_printable(beta));
	return (0);
}*/
