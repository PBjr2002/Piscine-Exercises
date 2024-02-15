/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:30:06 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/02 11:24:06 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

/*int	main(void)
{
	char	dest[] = "esta frase";
	char	src[] = " e linda";

	printf("%s\n", ft_strcat(dest, src));
	return (0);
}*/
