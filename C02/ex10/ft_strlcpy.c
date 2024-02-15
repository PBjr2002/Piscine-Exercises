/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:50:17 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/07 10:32:15 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	while (n < size - 1 && src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (n);
}

/*int	main(void)
{
	char	alpha[] = {"bullynette"};
	char	beta[29];

	printf("%u\n", ft_strlcpy(beta, alpha, 0));
	return (0);
}*/
