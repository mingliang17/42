/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:31:00 by ming              #+#    #+#             */
/*   Updated: 2025/02/23 22:44:08 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	grid_free(char ***grid, int size)
{
	int	row;
	int	col;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			free(grid[row][col]);
			col++;
		}
		free(grid[row]);
		row++;
	}
	free(grid);
}
