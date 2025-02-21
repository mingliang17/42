/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:56:38 by ming              #+#    #+#             */
/*   Updated: 2025/02/20 18:25:44 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
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
// 	char	str[1] = "";
// 	answer = ft_str_is_alpha(str);
// 	printf("%d",answer);
// }