/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:26:23 by pauberna          #+#    #+#             */
/*   Updated: 2023/07/31 12:47:42 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if (str[n] < 'A')
		{
			return (0);
		}
		if (str[n] > 'Z' && str[n] < 'a')
		{
			return (0);
		}
		if (str[n] > 'z')
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/*int	main(void)
{
	char	alpha[] = {};
	char	beta[] = {'a', 'b', 'C', 'Z'};
	char	gama[] = {'z', 'c', 1, 't'};

	printf("%d\n", ft_str_is_alpha(alpha));
	printf("%d\n", ft_str_is_alpha(beta));
	printf("%d\n", ft_str_is_alpha(gama));
	return (0);
}*/
