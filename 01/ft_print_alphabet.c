/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:58:48 by mconfort          #+#    #+#             */
/*   Updated: 2022/10/14 10:32:12 by mconfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	alpha;

	alpha = 'a';
	while (alpha <= 122)
	{	
		write (1, &alpha, 1);
		alpha = alpha + 1;
	}
}

int	main(void)
{	
	ft_print_alphabet();
}	
