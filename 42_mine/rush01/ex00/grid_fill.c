/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_fill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:13:21 by ming              #+#    #+#             */
/*   Updated: 2025/02/23 22:44:03 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	grid_fill(char ***grid, int size)
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
				grid[row][col][cell] = cell + '1';
				cell++;
			}
			col++;
		}
		row++;
	}
}
