/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:42:55 by asobor            #+#    #+#             */
/*   Updated: 2023/06/26 17:43:26 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str)
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

	l = argc;
	while (l-- > 1)
	{
		ft_printstr(argv[l]);
		ft_printstr("\n");
	}
}
