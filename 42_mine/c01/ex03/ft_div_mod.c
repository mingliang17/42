/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:16:16 by ming              #+#    #+#             */
/*   Updated: 2025/02/25 16:22:26 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// #include <stdio.h>
// int main(void)
// {
// 	int     a;
//     int     b;
//     int     div;
//     int     mod;
// 	a = 30;
// 	b = 4;	
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("divide %d by %d to get %d and a remaninder of %d", a, b, div, mod);
// 	return 0;
// }
