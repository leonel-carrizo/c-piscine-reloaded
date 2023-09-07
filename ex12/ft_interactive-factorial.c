/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interactive-factorial.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:47:31 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/07 10:29:57 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}

//int	main(void)
//{
//	int	x;
//	x = ft_iterative_factorial(5);
//	printf("the result is: %d\n", x);
//	return (0);
//}
