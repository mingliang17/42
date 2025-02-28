/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_operations.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:32:51 by ming              #+#    #+#             */
/*   Updated: 2025/02/23 22:59:57 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_OPERATIONS_H
#define GRID_OPERATIONS_H

char	***allocate_3d_grid(int size);
void	grid_fill(char ***grid, int size);
void	grid_print(char ***grid, int size);
void	grid_free(char ***grid, int size);

#endif
