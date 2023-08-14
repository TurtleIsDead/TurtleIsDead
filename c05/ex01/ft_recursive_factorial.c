/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:16:54 by asobor            #+#    #+#             */
/*   Updated: 2023/06/28 15:34:11 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb != 1)
	{
		res = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (res);
}
/*#include <stdio.h>
int main(void)
{
	printf ("%d", ft_recursive_factorial(5));
}*/
