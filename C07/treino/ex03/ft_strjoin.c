/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:43:39 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/15 17:08:21 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_strcat(char *src, char *dest);
int		ft_strlen(char *str);
int		total_len(int size, char **strs, char *sep);

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

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	n;

	if (size == 0)
		return (0);
	i = 0;
	n = 0;
	while (n < size)
	{
		i = i + ft_strlen(strs[n]);
		n++;
	}
	i = i + (ft_strlen(sep) * (size - 1));
	return (i);
}

char	*ft_strcat(char *src, char *dest)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		n;
	int		len;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_total_len(size, strs, sep);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	n = 0;
	while (n < size)
	{
		ft_strcat(strs[n], str);
		if (n < size - 1)
			ft_strcat(sep, str);
		n++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	char *sep;

	sep = "||";
	printf ("%s\n", ft_strjoin(ac, av, sep));
	return (0);
}
