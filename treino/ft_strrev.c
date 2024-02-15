/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:52:55 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/16 17:13:14 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
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
	char	alpha[] = "esta string vai ser revertida";
	printf("%s", ft_strrev(alpha));
	return (0);
}
