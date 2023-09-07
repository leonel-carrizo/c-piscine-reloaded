/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:07:17 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/09/07 11:25:17 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(int gc, char **param)
{
	int	i;

	i = 1;
	while (i < gc)
	{
		while (*param[i])
		{
			ft_putchar(*param[i]);
			param[i]++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_print_params(argc, argv);
	}
	return (0);
}
