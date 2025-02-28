/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:08:05 by ming              #+#    #+#             */
/*   Updated: 2025/02/28 16:02:00 by ming             ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	destlen;
	unsigned int	j;

	destlen = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[destlen + j] = src[j];
		j++;
	}
	dest[destlen + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[10] = "testing";
// 	char s2[12] = "statement";
// 	char *ptr_to_s1 = ft_strcat(s1,s2);
// 	printf("%s",ptr_to_s1);
// 	return 0;
// }
