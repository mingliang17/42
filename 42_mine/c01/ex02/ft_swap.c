/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 23:01:01 by ming              #+#    #+#             */
/*   Updated: 2025/02/18 22:25:59 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// #include <stdio.h>
// int main(void)
// {	
// 	int x;
// 	int y;
// 	int	*a;
// 	int	*b;

// 	x = 3;
// 	y = 7;

// 	a = &x;
// 	b = &y;

// 	printf("a= %d and b = %d\n",*a,*b);
// 	//alternatively i can also print as x and y
// 	printf("x= %d and y = %d\n",x,y);
// 	ft_swap(a,b);
// 	printf("a= %d and b = %d\n",*a,*b);
// 	printf("x= %d and y = %d\n",x,y);
// 	return 0;
// }
