/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:25:43 by ming              #+#    #+#             */
/*   Updated: 2025/02/23 22:44:12 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void	grid_print(char ***grid, int size)
{
	int	row;
	int	col;
	int	cell;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			cell = 0;
			while (cell < size)
			{
				ft_putchar(grid[row][col][cell]);
				if (cell < size - 1)
				{
					ft_putchar(' ');
				}
				cell++;
			}
			ft_putchar('\n');
			col++;
		}
		row++;
	}
}
