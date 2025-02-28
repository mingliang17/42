/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_perspective.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 23:13:08 by ming              #+#    #+#             */
/*   Updated: 2025/02/23 23:31:02 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void	print_perspective(char *perspective, int pers_size)
{
	int	i;

	i = 0;
	while (i < pers_size)
	{
		ft_putchar(perspective[i]);
		if (i < pers_size - 1)
			ft_putchar(',');
		i++;
	}
}
