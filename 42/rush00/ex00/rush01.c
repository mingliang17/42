/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:29:17 by pisoncha          #+#    #+#             */
/*   Updated: 2025/02/15 10:49:21 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_row(int cols, char first, char middle, char last)
{
	int	i;

	i = 0;
	while (i < cols)
	{
		if (i == 0)
			ft_putchar(first);
		else if (i == cols - 1)
			ft_putchar(last);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int cols, int rows)
{
	int	i;

	i = 0;
	if (cols < 1 || rows < 1)
	{
		write(1, "Error\n", 6);
		return ;
	}
	while (i < rows)
	{
		if (i == 0)
			ft_print_row(cols, '/', '*', '\\');
		else if (i == rows - 1)
			ft_print_row(cols, '\\', '*', '/');
		else
			ft_print_row(cols, '*', ' ', '*');
		i++;
	}
}
