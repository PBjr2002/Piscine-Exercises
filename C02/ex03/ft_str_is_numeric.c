/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:48:32 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/01 12:18:59 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if (str[n] < '0')
		{
			return (0);
		}
		if (str[n] > '9')
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/*int	main(void)
{
	char	alpha[] = {'1', '2', '3', '4', '5'};
	char	beta[] = {'1', '2', 'a', '4'};

	printf("%d\n", ft_str_is_numeric(alpha));
	printf("%d\n", ft_str_is_numeric(beta));	
	return (0);
}*/
