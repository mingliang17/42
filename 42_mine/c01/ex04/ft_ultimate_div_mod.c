/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:36:41 by ming              #+#    #+#             */
/*   Updated: 2025/02/25 16:23:19 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// #include <stdio.h>
// int main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 11;
// 	y = 3;

// 	printf("divide %d by %d to get:\n",x,y);
// 	ft_ultimate_div_mod(&x,&y);
// 	printf("answer %d remainder %d\n",x,y);
// 	return 0;
// }
