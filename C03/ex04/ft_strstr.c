/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:53:16 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/08 14:47:19 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[n] != '\0')
	{
		i = 0;
		while (str [n + i] == to_find[i] && str[n + i] != '\0')
		{
			i++;
			if (to_find[i] == '\0')
			{
				return (str + n);
			}
		}
		n++;
	}
	return (0);
}

/*int	main(void)
{
	char	alpha[] = {"esta sou e a source correta"};
	char	beta[] = {"source"};

	printf("%s\n",ft_strstr(alpha, beta));
	return (0);
}*/
