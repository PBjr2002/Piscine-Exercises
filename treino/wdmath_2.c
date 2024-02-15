/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmath_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:18:37 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/11 13:28:43 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

void	wdmatch(char *src, char *to_find)
{
	int	n;
	int	i;
	int	len;

	len = strlen(src);
	n = 0;
	while (src[n] != '\0')
	{
		i = 0;
		while (to_find[i] != '\0')
		{
			if (to_find[i] == src[n])
			{
				len++;
				break ;
			}
			i++;
		}
		n++;
	}
	i = 0;
	if (len == strlen(to_find))
	{
		while (to_find[i] != '\0')
		{
			write (1, &to_find[i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	return (0);
}
