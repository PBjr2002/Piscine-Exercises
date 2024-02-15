/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:21:48 by pauberna          #+#    #+#             */
/*   Updated: 2023/07/31 14:44:21 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if (str[n] < 'a' || str[n] > 'z')
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/*int	main(void)
{
	char	alpha[] = {'a', 'b', 'c', 'd'};
	char	beta[] = {'f', 'g', '1'};

	printf("%d\n", ft_str_is_lowercase(alpha));
	printf("%d\n", ft_str_is_lowercase(beta));
	return (0);
}*/
