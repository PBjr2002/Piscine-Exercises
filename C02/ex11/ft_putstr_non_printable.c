/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:37:24 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/06 15:03:56 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert(char str, char *hex)
{
	char const	*num_hex;

	num_hex = "0123456789abcdef";
	hex[0] = num_hex[(unsigned char)str / 16];
	hex[1] = num_hex[(unsigned char)str % 16];
	hex[2] = '\0';
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];
	int		n;

	n = 0;
	while (str[n])
	{
		if (str[n] < 32 || str[n] == 127)
		{
			convert(str[n], hex);
			ft_putchar('\\');
			ft_putchar(hex[0]);
			ft_putchar(hex[1]);
			n++;
		}
		else
		{
			ft_putchar(str[n]);
			n++;
		}
	}
}

/*int	main(void)
{
	char	alpha[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(alpha);
	return (0);
}*/
