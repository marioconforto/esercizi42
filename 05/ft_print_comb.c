/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:44:56 by mconfort          #+#    #+#             */
/*   Updated: 2022/10/17 21:26:26 by mconfort         ###   ########.fr       */
/*                     
 *                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_print_comb(void)
{
	char	a;
	char	b;
	char 	c;

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
						if (a != '7'){write(1, ", ", 2);}
						c++;
					}	
				b++;
			}
		a++;	
	}
}
int main(){
	ft_print_comb();
}
