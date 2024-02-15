/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:39:15 by pauberna          #+#    #+#             */
/*   Updated: 2023/08/09 20:12:56 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

int	check_equal(char *str, int n, int a)
{
	int	b;

	b = 0;
	while (b < a)
	{
		if (str[n] == str[n + 1])
		{
			return (0);
		}
		b++;
	}
	return (1);
}

int	check_error(char *str)
{
	int	a;
	int	n;
	int	equal;

	a = ft_strlen(str);
	n = 0;
	while (str[n] != '\0')
	{
		if (a == 1 || a == 0)
		{
			return (0);
		}
		if (str[n] <= 32 || str[n] == 127 || str[n] == '-' || str[n] == '+')
		{
			return (0);
		}
		equal = check_equal(str, n, a);
		if (equal == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (check_error(base) == 1)
	{
		if (nb == -2147483648)
		{
			ft_putnbr_base(nb / ft_strlen(base), base);
			ft_putnbr_base(-nb % ft_strlen(base), base);
		}
		else if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
			ft_putnbr_base(nb, base);
		}
		else if (nb < ft_strlen(base))
			ft_putchar(base[nb]);
		else if (nb >= ft_strlen(base))
		{
			ft_putnbr_base(nb / ft_strlen(base), base);
			ft_putnbr_base(nb % ft_strlen(base), base);
		}
	}
}

/*int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");
	ft_putnbr_base(-2147483648, "01");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(-2147483648, "poneyvif");
	printf("\n");
	return (0);
}*/
