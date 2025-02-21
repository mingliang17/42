/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 22:57:29 by ming              #+#    #+#             */
/*   Updated: 2025/02/16 18:18:57 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 'a';
	while (count >= 'a' && count <= 'z')
	{
		write(1, &count, 1);
		count++;
	}
}
//int main ()
//{
//	ft_print_alphabet();
//	return 0;
//}
