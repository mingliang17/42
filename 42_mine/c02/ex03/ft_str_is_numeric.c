/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:14:01 by ming              #+#    #+#             */
/*   Updated: 2025/02/20 18:28:38 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
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
// 	char	str[6] = "115a";
// 	answer = ft_str_is_numeric(str);
// 	printf("%d",answer);
// }