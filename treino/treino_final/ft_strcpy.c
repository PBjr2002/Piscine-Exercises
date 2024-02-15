/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:44:07 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/17 13:50:57 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] != '\0')
	{
		s2[n] = s1[n];
		n++;
	}
	s2[n] = '\0';
	return (s2);
}

int	main(void)
{
	char	alpha[] = "escreve isto na s2";
	char	beta[] = {};

	printf ("%s\n", ft_strcpy(alpha, beta));
	return (0);
}
