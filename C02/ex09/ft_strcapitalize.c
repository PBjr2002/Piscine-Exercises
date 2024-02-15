/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:42:42 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/02 14:26:16 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	check(char *str, int n)
{
	if (str[n - 1] >= 'A' && str[n - 1] <= 'Z')
	{
		return (0);
	}
	if (str[n - 1] >= 'a' && str[n - 1] <= 'z')
	{
		return (0);
	}
	if (str[n - 1] >= '0' && str[n - 1] <= '9')
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	n;
	int	num;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			str[n] = str[n] + 32;
		}
		n++;
	}
	n = 0;
	while (str[n] != '\0')
	{
		num = check(str, n);
		if (num == 1 && str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
		}
		n++;
	}
	return (str);
}
/*
int	main()
{
	char	alpha[] ={"salut, coMMent tu vas ? 42mots qUarantE-deux; cinquante+et+un"};

	printf("%s\n", ft_strcapitalize(alpha));
	return (0);
}
*/
