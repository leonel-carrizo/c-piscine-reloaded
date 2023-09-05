/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:07:17 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/05 19:48:01 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			while (*argv[i])
			{
				ft_putchar(*argv[i]);
				argv[i]++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
