/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:24:42 by asobor            #+#    #+#             */
/*   Updated: 2023/06/28 14:23:50 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 0;
	if (nb <= 0)
		return (0);
	while (a <= nb / 2 && a * a < nb && a <= 46340)
		a++;
	if (a * a == nb)
		return (a);
	else
		return (0);
}
/*#include <stdio.h>
int main(void)
{
	printf ("%d", ft_sqrt(2147395600));
}*/