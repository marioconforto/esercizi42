/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:33:40 by mconfort          #+#    #+#             */
/*   Updated: 2022/10/14 10:58:58 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	rev;

	rev = 122;
	while (rev >= 97)
	{
		write(1, &rev, 1);
		rev = rev - 1;
	}	
}

int	main(void)
{
	ft_print_reverse_alphabet();
}	
