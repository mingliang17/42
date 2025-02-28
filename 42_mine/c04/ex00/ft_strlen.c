/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:27:04 by ming              #+#    #+#             */
/*   Updated: 2025/02/28 16:29:57 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	str[6] = "abaf";
// 	int ans = ft_strlen(str);
// 	printf("%d",ans);
// }