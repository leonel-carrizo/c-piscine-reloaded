/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:47:27 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/05 14:00:43 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar(78);
	}
	else
	{
		ft_putchar(80);
	}
}

/*int	main(void)
{
	ft_is_negative(5);
	ft_putchar('\n');
	ft_is_negative(-5);
	ft_putchar('\n');
	ft_is_negative(0);
	ft_putchar('\n');
	ft_is_negative('\0');
	ft_putchar('\n');
	return (0);
}*/
