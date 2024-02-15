/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:41:13 by pauberna          #+#    #+#             */
/*   Updated: 2023/07/31 18:16:12 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
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

	printf("%s\n", ft_strupcase(alpha));
	printf("%s\n", ft_strupcase(beta));
	printf("%s\n", ft_strupcase(gama));
	return (0);
}*/
