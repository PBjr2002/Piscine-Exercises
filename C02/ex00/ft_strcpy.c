/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:13:26 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/01 13:59:54 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	size;

	size = 0;
	while (src[size] != '\0')
	{
		dest[size] = src[size];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "isto serve de teste para o exericio 00 =)";
	char	dest[] = {};

	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}*/
