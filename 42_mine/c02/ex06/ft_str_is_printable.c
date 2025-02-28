/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:36:19 by ming              #+#    #+#             */
/*   Updated: 2025/02/25 16:45:11 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			str++;
		else
			return (0);
	}
	return (1);
}
// #include <stdio.h>
// int main(void)
// {
// 	int	answer;
// 	char	str[6] = "";
// 	answer = ft_str_is_printable(str);
// 	printf("%d",answer);
//
/* 32 to 126*/