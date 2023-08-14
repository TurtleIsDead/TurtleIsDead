/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:31:35 by asobor            #+#    #+#             */
/*   Updated: 2023/06/20 19:37:35 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	a;	

	a = 0;
	while (str[a])
	{
		if ((str[a] >= 'a') && (str[a] <= 'z'))
			str[a] = ((str[a] - 'a') + 'A');
		a++;
	}
	return (str);
}
/*#include <stdio.h>
int main(void)
{
	char str[] = "lidia67567";
	printf ("%s\n", str);
	ft_strupcase(str);
	printf ("%s", str);
}*/
