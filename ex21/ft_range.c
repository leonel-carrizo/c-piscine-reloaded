/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:53:03 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/06 16:25:35 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

//int	main(void)
//{
//	int	min;
//	int	max;
//	int	*res;
//	int	i;
//
//	min = 0;
//	max = 11;
//	res = NULL;
//	i = 0;
//	res = ft_range(min, max);
//	while (i < (max - min))
//		printf("%d", res[i++]);
//	return (0);
//}
