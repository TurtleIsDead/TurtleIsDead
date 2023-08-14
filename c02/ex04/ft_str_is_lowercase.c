/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:00:31 by asobor            #+#    #+#             */
/*   Updated: 2023/06/20 19:03:40 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;	

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a') && (str[a] <= 'z'))
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
	if ((ft_str_is_lowercase(str)) == 1)
		printf ("1");
	else
		printf ("0");
	return(0);
}*/
