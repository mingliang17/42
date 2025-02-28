/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array3d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 21:56:06 by ming              #+#    #+#             */
/*   Updated: 2025/02/23 22:39:27 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **allocate_array(int size)
{
    int row = 0;
    char **array;

    array = (char **)malloc(size * sizeof(char *));
    while (row < size)
    {
        array[row] = (char *)malloc(size * sizeof(char));
        row++;
    }
    return array;
}

void fill_array(char **array, int size)
{
    int row = 0;
    int col;

    while (row < size)
    {
        col = 0;
        while (col < size)
        {
            array[row][col] = col + '0';  // Assign values as chars ('0', '1', '2', ...)
            col++;
        }
        row++;
    }
}

void print_array(char **array, int size)
{
    int row = 0;
    int col;

    while (row < size)
    {
        col = 0;
        while (col < size)
        {
            ft_putchar(array[row][col]);  // Print the value
            if (col < size - 1)
            {
                ft_putchar(' ');  // Print space between characters, except after the last one
            }
            col++;
        }
        ft_putchar('\n');  // Print new line after each row
        row++;
    }
}

void free_array(char **array, int size)
{
    int row = 0;

    while (row < size)
    {
        free(array[row]);  // Free each row
        row++;
    }
    free(array);  // Free the array of pointers
}

int main(void)
{
    int size = 4;  // Initialize size
    char **array;

    array = allocate_array(size);
    if (array == NULL)
    {
        return 1;
    }

    fill_array(array, size);
    print_array(array, size);
    free_array(array, size);

    return 0;
}
