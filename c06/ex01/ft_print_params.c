/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:34:13 by asobor            #+#    #+#             */
/*   Updated: 2023/06/26 17:41:05 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	l;

	l = 0;
	while (l++ < argc - 1)
	{
		ft_putstr(argv[l]);
		ft_putstr("\n");
	}
}
