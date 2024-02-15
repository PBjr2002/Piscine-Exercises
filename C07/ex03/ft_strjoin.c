/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:26:29 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/13 19:10:11 by pauberna         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	str_end;
	int	str_start;

	str_end = 0;
	str_start = 0;
	while (dest[str_end] != '\0')
	{
		str_end++;
	}
	while (src[str_start] != '\0')
	{
		dest[str_end] = src[str_start];
		str_end++;
		str_start++;
	}
	dest[str_end] = '\0';
	return (dest);
}

int	ft_total_len(int n, int size, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (n < size)
	{
		i = i + ft_strlen(strs[n]);
		n++;
	}
	i = i + (ft_strlen(sep) * (size - 1));
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		n;
	int		len;

	n = 0;
	if (size == 0)
	{
		return ((char *)malloc(sizeof(char)));
	}
	len = ft_total_len(n, size, strs, sep);
	str = (char *)malloc(sizeof(char) * (len + 1));
	n = 0;
	while (n < size)
	{
		ft_strcat(str, strs[n]);
		if (n < size - 1)
			ft_strcat(str, sep);
		n++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	char	*sep;
	
	sep = "||";
	printf ("%s\n", ft_strjoin(ac, av, sep));
	return (0);
}	
