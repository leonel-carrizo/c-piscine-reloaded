/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:47:27 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/08 17:28:05 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
//{
//	write(1, &c, 1);
//}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

//int	main(void)
//{
//	ft_is_negative(5);
//	ft_putchar('\n');
//	ft_is_negative(-5);
//	ft_putchar('\n');
//	ft_is_negative(0);
//	ft_putchar('\n');
//	ft_is_negative(NULL);
//	ft_putchar('\n');
//	return (0);
//}
