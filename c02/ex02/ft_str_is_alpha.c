/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:35:06 by asobor            #+#    #+#             */
/*   Updated: 2023/06/20 18:54:23 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A' && str[a] <= 'Z')
			|| (str[a] >= 'a' && str[a] <= 'z'))
			a++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "";
	if ((ft_str_is_alpha(str)) == 1)
		printf ("1");
	else
		printf ("0");
	return (0);
}*/
