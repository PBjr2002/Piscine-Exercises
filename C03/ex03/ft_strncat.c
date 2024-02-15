/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:25:11 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/02 11:50:49 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	str_end;
	unsigned int	str_start;

	str_end = 0;
	str_start = 0;
	while (dest[str_end] != '\0')
	{
		str_end++;
	}
	while (str_start < nb && src[str_start] != '\0')
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
	char	dest[] = "esta frase ";
	char	src[] = "esta agora completa";

	printf("%s\n", ft_strncat(dest, src, 8));
	return (0);
}*/
