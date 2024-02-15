/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:18:32 by pauberna          #+#    #+#             */
/*   Updated: 2023/07/31 18:29:12 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			str[n] = str[n] + 32;
		}
		n++;
	}
	return (str);
}

/*int	main(void)
{
	char	alpha[] = {"este teste tem letras minusculas."};
	char	beta[] = {"E ESTE SO TEM MAIUSCULAS."};
	char	gama[] = {"E este Tem Um MIX!"};

	printf("%s\n", ft_strlowcase(alpha));
	printf("%s\n", ft_strlowcase(beta));
	printf("%s\n", ft_strlowcase(gama));
	return (0);
}*/
