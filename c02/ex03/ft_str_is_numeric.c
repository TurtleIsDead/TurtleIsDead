/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:56:12 by asobor            #+#    #+#             */
/*   Updated: 2023/06/20 18:59:34 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	a;	

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= '0') && (str[a] <= '9'))
			a++;
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>
int main(void)
{
	char str[] = "";
	if ((ft_str_is_numeric(str)) == 1)
		printf ("1");
	else
		printf ("0");
	return (0);
}*/
