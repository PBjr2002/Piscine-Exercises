/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:48:06 by pauberna          #+#    #+#             */
/*   Updated: 2023/07/31 15:30:46 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if (str[n] < 'A' || str[n] > 'Z')
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/*int	main(void)
{
	char	alpha[] = {'A', 'B', 'C'};
	char	beta[] = {'G', 'c', 'I'};

	printf("%d\n", ft_str_is_uppercase(alpha));
	printf("%d\n", ft_str_is_uppercase(beta));
	return (0);
}*/
