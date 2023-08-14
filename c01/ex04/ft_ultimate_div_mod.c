/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:50:20 by asobor            #+#    #+#             */
/*   Updated: 2023/06/14 21:43:43 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	k;	
	int	d;	

	k = *a;
	d = *b;
	*a = k / d;
	*b = k % d;
}
/*
#include <stdio.h>
int main()
{
	int a;
	a = 13;
	int b;
	b = 4;
	printf("%d\n%d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d", a, b);
	return(0);
}*/
