/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:57:26 by ming              #+#    #+#             */
/*   Updated: 2025/02/16 18:22:42 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
negative test case function added, then nb/= -1 cos there is some weird output
UPDATE: dont use /-1 cos will error when the number very big, i
nstead just add the - directly
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
// int	main(void)
// {
// 	ft_putnbr(-2148);
// 	return (0);
// }
