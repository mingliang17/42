/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:54:01 by ming              #+#    #+#             */
/*   Updated: 2025/02/20 18:49:35 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[11] = "";
// 	char	src[11] = "hellololol";
// 	unsigned int n;	
// 	n = 4;
// 	ft_strncpy(dest, src, n);
// 	printf("%s\n%s\n%d",dest,src,n);
// 	return 0;
// }
