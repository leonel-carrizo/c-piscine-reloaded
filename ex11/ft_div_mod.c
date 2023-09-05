/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:34:01 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/05 14:46:16 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	i;
	int	j;
	int	res;
	int	rem;

	i = 10;
	j = 3;
	ft_div_mod(i, j, &res, &rem);
	printf("the result is:%d\n", res);
	printf("the remainder is:%d\n", rem);
	return (0);
}*/
