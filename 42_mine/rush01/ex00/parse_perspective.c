/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_perspective.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 23:10:13 by ming              #+#    #+#             */
/*   Updated: 2025/02/23 23:31:13 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	parse_perspective(char *arg, int size, char *perspective)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] == ' ')
			i++;
		else if (arg[i] >= '1' && arg[i] <= size + '0')
			perspective[counter++] = arg[i++];
		else
			return (0);
	}
	return (counter);
}
