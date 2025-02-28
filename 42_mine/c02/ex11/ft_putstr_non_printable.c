/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:50:27 by ming              #+#    #+#             */
/*   Updated: 2025/02/27 15:32:56 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hexa[2];

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar(92);
			*str = (unsigned char)*str;
			hexa[0] = "0123456789abcdef"[*str / 16];
			hexa[1] = "0123456789abcdef"[*str % 16];
			ft_putchar(hexa[0]);
			ft_putchar(hexa[1]);
		}
		str++;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	char	str[50] = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(str);

// }
/*type cast unsigned char cos need to ensure that
the char values are positive between 0 to 255 and not -128 to 127*/