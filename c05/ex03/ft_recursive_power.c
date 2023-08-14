/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:06:12 by asobor            #+#    #+#             */
/*   Updated: 2023/06/28 14:19:26 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * (ft_recursive_power(nb, --power)));
	return (nb);
}
/*#include <stdio.h>
int main(void)
{
	printf ("%d", ft_recursive_power(3, -3));
}*/
