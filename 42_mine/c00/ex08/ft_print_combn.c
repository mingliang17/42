/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 20:13:30 by ming              #+#    #+#             */
/*   Updated: 2025/02/15 20:13:34 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Function to print a two-digit number, e.g., '01', '02', ..., '09'
void ft_putnbr(int num)
{
    if (num < 10)
    {
        ft_putchar('0');
    }
    ft_putchar(num + '0');
}

// Recursive function to generate combinations
void ft_print_combn_helper(int n, int start, int current, int depth)
{
    if (depth == n)  // Base case: When the combination is of length n
    {
        ft_putnbr(current);  // Print the current combination
        if (current < (100 - n)) // Check if it's not the last combination
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        return;
    }

    // Generate next number in the combination
    for (int i = start; i <= 9; i++)
    {
        ft_print_combn_helper(n, i + 1, current * 10 + i, depth + 1);  // Recur with the next number
    }
}

void ft_print_combn(int n)
{
    ft_print_combn_helper(n, 0, 0, 0);
}

int	main(void)
{
	int	n;
	n = 8;
	ft_print_combn(n);
	return 0;
}