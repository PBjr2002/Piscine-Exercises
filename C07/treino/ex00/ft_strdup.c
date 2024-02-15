/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:18:09 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/15 12:42:22 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);
int	ft_strlen(char *str);

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
	char	*array;
	int		n;

	array = (char *)malloc(ft_strlen(src) *(sizeof(char) + 1));
	if (array == NULL)
		return (NULL);
	n = 0;
	while (src[n] != '\0')
	{
		array[n] = src[n];
		n++;
	}
	array[n] = '\0';
	return (array);
}

int	main(void)
{
	char	*str;

	str = "este texto vai ser copiado para uma dupla desta string";
	printf ("%s\n", ft_strdup(str));
	return (0);
}
