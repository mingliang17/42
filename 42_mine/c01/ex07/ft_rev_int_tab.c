/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:01:55 by ming              #+#    #+#             */
/*   Updated: 2025/02/25 16:33:11 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (end > start)
	{
		temp = tab[end];
		tab[end] = tab[start];
		tab[start] = temp;
		start++;
		end--;
	}
}

/*
#include <stdio.h>
int main(void)
{
	const int arrsize = 7;
	int count = 0;
    int tab[7] = {1, 2, 3, 4, 54, 6, 52};
	while (count < arrsize)
	{
		printf("%d,",tab[count]);
		count++;
	}
	printf("%c",'\n');
	
	ft_rev_int_tab(tab,arrsize);
	count = 0;
	while (count < arrsize)
	{
		printf("%d,",tab[count]);
		count++;
	}	
}
// printf("%d,%d,%d,%d,%d,%d\n",tab[0],tab[1],tab[2],
tab[3],tab[4],tab[5],tab[6]);
// ft_rev_int_tab(tab, 7);
// printf("%d,%d,%d,%d,%d,%d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
*/