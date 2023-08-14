/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:04:26 by asobor            #+#    #+#             */
/*   Updated: 2023/06/20 19:10:44 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;	

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
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
        if ((ft_str_is_uppercase(str)) == 1)
                printf ("1");
        else
                printf ("0");
        return(0);
}*/
