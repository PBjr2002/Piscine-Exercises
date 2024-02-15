/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:21:58 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/09 12:35:24 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

/*int	main(void)
{
	printf("%d\n", ft_strncmp("a", "a", 1));
	printf("%d\n", ft_strncmp("a", "z", 1));
	printf("%d\n", ft_strncmp("batata", "batatas", 6));
	printf("%d\n", ft_strncmp("batata", "batatas", 7));
	return (0);
}*/
