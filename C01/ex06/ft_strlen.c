/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:27:42 by pauberna          #+#    #+#             */
/*   Updated: 2023/07/30 11:21:13 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
	{
		count++;
	}
	return (count);
}

/*int	main(void)
{
	int	num;
	char str[]="boas este teste tem 35 caracteres !";
	num = ft_strlen(str);
	printf("%d", num);
	return (0);
}*/
