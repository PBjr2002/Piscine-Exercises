/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 10:41:58 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/13 11:06:18 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		n;

	n = 0;
	dest = (char *)malloc(ft_strlen(src) *(sizeof(char) + 1));
	if (dest == NULL)
		return (0);
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*alpha;

	alpha = "teste para testar o teste :0";
	printf("%s\n", ft_strdup(alpha));
	return (0);
}*/
