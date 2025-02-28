/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:19:47 by ming              #+#    #+#             */
/*   Updated: 2025/02/27 15:35:21 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	count;
	int	src_len;

	count = 0;
	src_len = 0;
	while (count < size - 1)
	{
		dest[count] = src[count];
		count++;
	}
	dest[size] = '\0';
	while (*src)
	{
		src_len++;
		src++;
	}
	return (src_len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char src[16] = "abcdefg545sgdga";
// 	char dest[9] = "";
// 	unsigned int size = 8;
// 	printf("%s\n",src);
// 	int answer = ft_strlcpy(dest, src, size);
// 	printf("%s\n",dest);
// 	printf("%d\n",answer);
// }