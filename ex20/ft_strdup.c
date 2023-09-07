/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:53:02 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/06 14:12:55 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = ft_strlen(src);
	dest = malloc(len + 1);
	i = 0;
	if (!dest)
		return (NULL);
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

//int	main(int ac, char **av)
//{
//	char *me;
//	char *other;
//	
//	if (ac == 2)
//	{
//		me = ft_strdup(av[1]);
//		other = strdup(av[1]);
//		printf(":Me= %s:\n:Linux= %s:\n", me, other);
//	}
//	return (0);
//}
