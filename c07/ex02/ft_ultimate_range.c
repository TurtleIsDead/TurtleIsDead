/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:15:20 by asobor            #+#    #+#             */
/*   Updated: 2023/06/29 19:08:17 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	*tab;

	a = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (-1);
	else
	{
		while (a < max - min)
		{
			tab[a] = min + a;
			a++;
		}
		*range = tab;
		return (a);
	}
}
/*nclude <stdio.h>
int main(void)
{
	int res;
	int *tab;
	int	i;

	i = 0;	
	res = ft_ultimate_range(&tab, 6, 20);
	while (i < res)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/
