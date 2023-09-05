/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:38:52 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/05 16:34:50 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	while (i * i < nb && i <= 464339)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

//int	main(void)
//{
//	printf("Value is: %d\n", ft_sqrt(9));
//	return (0);
//}
