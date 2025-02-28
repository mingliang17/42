/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 22:22:37 by ming              #+#    #+#             */
/*   Updated: 2025/02/25 16:30:27 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str ++;
	}
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*pointer;
// 	pointer = "asjahkg";
// 	ft_putstr(pointer);
// }
//the pointer moves up by 1
