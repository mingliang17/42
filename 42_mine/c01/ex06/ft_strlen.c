/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 22:53:34 by ming              #+#    #+#             */
/*   Updated: 2025/02/18 23:13:43 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int   ft_strlen(char  *str)
{   
	int count;
	count = 0;
	while(*str)
	{
		count++;
		str++;		
	}
	return count;
}
#include <stdio.h>
int main(void)
{
	char	*str;
	int	length;
	str = "asldkkdk";
	length = ft_strlen(str);
	printf("the length of string %s at address %p is %d",str, str,length);
}
//the funciton must start with int instead of void to get return of int count