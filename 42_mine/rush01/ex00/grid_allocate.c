/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_allocate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:05:06 by ming              #+#    #+#             */
/*   Updated: 2025/02/23 22:09:23 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	***allocate_3d_array(int size)
{
	int	row;
	int	col;
	char	***grid;

	grid = (char ***)malloc(size * sizeof(char **));
	row = 0;
	while (row < size)
	{
		grid[row] = (char **)malloc(size * sizeof(char *));
		col = 0;
		while (col < size)
		{
			grid[row][col] = (char *)malloc(size * sizeof(char));
			col++;
		}
		row++;
	}
	return (grid);
}
