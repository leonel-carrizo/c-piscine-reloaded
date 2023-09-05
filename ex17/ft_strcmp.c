/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:29:06 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/05 18:29:42 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (*s1 == *s2 && *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

//int	main(int argc, char *argv[])
//{
//	int value;
//
//	value = 0;
//	if (argc < 3)
//		printf("few arguments");
//	if (argc == 3)
//	{
//		value = ft_strcmp(argv[1], argv[2]);
//		if (value < 0)
//			printf("\'%s\' is less than \'%s\' by %d\n", argv[1], argv[2], value);
//		if (value > 0)
//			printf("\'%s\' is greater than \'%s\' by %d\n", argv[1], argv[2], value);
//		if (value == 0)
//			printf("\'%s\' is equal than \'%s\' by %d\n", argv[1], argv[2], value);
//	}
//
//	return (0);
//}
