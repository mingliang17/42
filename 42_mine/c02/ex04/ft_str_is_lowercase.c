/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:18:25 by ming              #+#    #+#             */
/*   Updated: 2025/02/20 18:29:08 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
// 	answer = ft_str_is_lowercase(str);
// 	printf("%d",answer);
// }