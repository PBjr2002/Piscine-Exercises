/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:18:44 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/17 15:09:20 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n]!= '\0')
	{
		n++;
	}
	return (n);
}

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	*ft_strrev(char *str)
{
	int	n;
	int	i;

	n = ft_strlen(str);
	i = 0;
	while (i < n / 2)
	{
		ft_swap(&str[i], &str[n - i - 1]);
		i++;
	}
	return (str);
}

int	main(void)
{
	char	alpha[] = "isto vai levar reverse ehehe";

	printf("%s\n", ft_strrev(alpha));
	return (0);
}
