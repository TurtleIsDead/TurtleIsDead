/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:03:00 by asobor            #+#    #+#             */
/*   Updated: 2023/06/29 17:47:47 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	a;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		a = 0;
		while (a < max - min)
		{
			tab[a] = min + a;
			a++;
		}
		return (tab);
	}
}
/*#include <stdio.h>
int main(void)
{
	int i;
	i=0;
	int *res;
	res = ft_range(0,5);
	while (i < 5)
	{
		printf("%i\n", res[i]);
		i++;
	}
}*/
