/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:21:50 by ming              #+#    #+#             */
/*   Updated: 2025/02/25 17:03:59 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
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
// 	char	str[6] = "ASaD";
// 	answer = ft_str_is_uppercase(str);
// 	printf("%d",answer);
// }