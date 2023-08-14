/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:06:12 by asobor            #+#    #+#             */
/*   Updated: 2023/06/25 16:12:45 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;	

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		res *= nb--;
	}
	return (res);
}
/*#include <stdio.h>
int main(void)
{
	printf ("%d", ft_iterative_factorial(-10));
}*/
