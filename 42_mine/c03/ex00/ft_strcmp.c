/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:43:26 by ming              #+#    #+#             */
/*   Updated: 2025/02/28 14:06:32 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[20] = "aggg";
// 	char s2[20] = "aggk";
// 	int ans = ft_strcmp(s1,s2);
// 	printf("%d",ans);
// 	return 0;
// }