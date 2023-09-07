/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:55:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/07 10:13:53 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	x;

	x = 'a';
	while (x >= 'a' && x <= 'z')
		ft_putchar(x++);
}

//int	main(void)
//{
//	ft_print_alphabet();
//	return (0);
//}
