/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:56:56 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/08 12:21:41 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dest_len = j;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
	{
		return (src_len + size);
	}
	while (src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[j] = src [i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}

/*int	main(void)
{
	char	alpha[] = "keep ";
	char	beta[] = "swimming x)";

	printf("%d\n", ft_strlcat(alpha, beta, 2));
	return (0);
}*/
