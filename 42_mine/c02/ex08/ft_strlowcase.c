/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:05:14 by ming              #+#    #+#             */
/*   Updated: 2025/02/25 17:16:11 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[8] = "Avk88vA";
// 	ft_strlowcase(str);
// 	printf("%s\n",str);
// 	return (0);
// }