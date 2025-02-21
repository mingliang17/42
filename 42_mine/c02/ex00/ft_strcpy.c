/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:13:59 by ming              #+#    #+#             */
/*   Updated: 2025/02/20 15:53:18 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{   
	char    src[9] = "hellolol";
	char    dest[9] = "";
	ft_strcpy(dest,src);
	printf("%s\n%s",dest,src);
	return 0;  
}
null terminate the new string with dest[i] = '\n' to ensure
string gets terminated properly, else if different lenghts will error*/