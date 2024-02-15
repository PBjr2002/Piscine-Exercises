/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:39:39 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/15 11:15:33 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(char	*src)
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*array;
	int				n;

	n = 0;
	array = (char *)malloc((ac - 1) * sizeof(struct s_stock_str));
	if (array == NULL)
		return (NULL);
	while (n < ac)
	{
		array[n].size = ft_strlen(av[n]);
		array[n].str = av[n];
		array[n].copy = ft_strdup(av[n]);
		n++;
	}
	array[n].str = 0;
	array[n].copy = 0;
	return (array);
}

int	main(int ac, char **av)
{
	struct s_stock_str	*structs;
	int				n;

	structs = ft_strs_to_tab(ac, av);
	n = 0;
	while (n < ac)
	{
		printf("%d\n", n);
		printf("")
		n++;
	}
	return (0);
}
