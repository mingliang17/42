/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:11:35 by ming              #+#    #+#             */
/*   Updated: 2025/02/25 19:12:42 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_capitalize(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
}

void	ft_decapitalize(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (*str == ' ' || *str == '+' || *str == '-')
			flag = 1;
		else
		{
			if (flag == 1)
			{
				ft_capitalize(str);
				flag = 0;
			}
			else
			{
				ft_decapitalize(str);
			}
		}
		str++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	str[100] = "salut, comment ? 42mots quarante-deux; cinquante+et+un";
// 	printf("%s\n",str);
// 	ft_strcapitalize(str);
// 	printf("%s\n",str);
// 	return (0);
// }