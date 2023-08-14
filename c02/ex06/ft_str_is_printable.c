/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:11:38 by asobor            #+#    #+#             */
/*   Updated: 2023/06/20 19:29:26 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	a;	

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 32) && (str[a] <= 126))
			a++;
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>
int main(void)
{
        char str[] = "jtghturtgyu";
        if ((ft_str_is_printable(str)) == 1)
                printf ("1");
        else
                printf ("0");
        return(0);
}*/
