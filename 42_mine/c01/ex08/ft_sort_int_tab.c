/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:19:57 by ming              #+#    #+#             */
/*   Updated: 2025/02/25 16:35:43 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
		{
			i++;
		}
	}
	size --;
}

// #include <stdio.h>
// int main(void)
// {
// 	const	int size = 9;
// 	int tab[9] = {2,8,1,2,7,4,0, 3, 5};
// 	int count = 0;
// 	while (count < size)
// 	{
// 		printf("%d",tab[count]);
// 		count++;
// 	}
// 	printf("%c",'\n');
// 	ft_sort_int_tab(tab,size);
// 	count = 0;
// 	while (count < size)
// 	{
// 		printf("%d",tab[count]);
// 		count++;
// 	}
// }