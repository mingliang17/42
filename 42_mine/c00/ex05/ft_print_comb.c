/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ming <ming@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:13:12 by ming              #+#    #+#             */
/*   Updated: 2025/02/14 16:45:59 by ming             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  023, 024, 025, 026, 027, 028, 029,
  034, 035, 036, 037, 038, 039,
  045, 046, 047, 048, 049,
  056, 057, 058, 059,
  067, 068, 069,
  078, 079,
  089,

  123, 124, 125, 126, 127, 128, 129,
  134, 135, 136, 137, 138, 139,
  145, 146, 147, 148, 149,
  156, 157, 158, 159,
  167, 168, 169,
  178, 179,
  189,

  234, 235, 236, 237, 238, 239,

  ....

  567, 568, 569,
  578, 579,
  589,

  678, 679,
  689,

  789

  number = abc

  loop a from 0 to 7
	start a in the next round from one number larger
	a +=1

	loop b from 1 to 8
		start b in the next round from one number larger a

		loop c from 2 to 9
			start c in the next round from one number larger b


*/
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7' || b != '8' || c != '9')
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
