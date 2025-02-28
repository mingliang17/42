/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:35:06 by ming              #+#    #+#             */
/*   Updated: 2025/02/23 23:30:21 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "grid_fill.c"
#include "grid_print.c"
#include "grid_free.c"
#include "ft_putchar.c"
#include "ft_puterror.c"
#include "ft_putchar.h"
#include "parse_perspective.c"
#include "print_perspective.c"

int main(int argc, char **argv)
{
    int size;
    int pers_size;
    char *perspective;
    char ***grid;

    size = 4;
    pers_size = size * size;
    perspective = (char *)malloc(pers_size * sizeof(char));

    if (argc != 2)
    {
        ft_puterror();
        free(perspective);
        return (1);
    }

    int counter = parse_perspective(argv[1], size, perspective);
    if (counter != pers_size)
    {
        ft_puterror();
        free(perspective);
        return (1);
    }

    print_perspective(perspective, pers_size);
    free(perspective);

    grid_fill(grid, size);
    grid_print(grid, size);
    grid_free(grid, size);

    return (0);
}
