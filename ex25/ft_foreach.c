/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:35:49 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/08 15:43:07 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < lenght)
		f(tab[i++]);
}

//void	ft_putnbr(int nb)
//{
//	long	nbr;
//	char	num[10];
//	short	i;
//
//	nbr = nb;
//	if (0 == nb)
//		write(1, "0", 1);
//	if (nbr < 0)
//	{
//		nbr *= -1;
//		write(1, "-", 1);
//	}
//	i = 0;
//	while (nbr)
//	{
//		num[i] = (nbr % 10) + '0';
//		nbr /= 10;
//		i++;
//	}
//	while (i > 0)
//		write(1, &num[--i], 1);
//}
//
//int	main(void)
//{
//	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//
//	ft_foreach(tab, 10, &ft_putnbr);
//	return (0);
//}

// *tab: the array
// lenght: how many characer have the array
//void(*f)(int): the pointer to the address of the function
