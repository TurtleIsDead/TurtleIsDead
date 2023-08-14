/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:38:20 by asobor            #+#    #+#             */
/*   Updated: 2023/06/20 19:39:52 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	a;	

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
			str[a] = ((str[a] - 'A') + 'a');
		a++;
	}
	return (str);
}
/*#include <stdio.h>
int main(void)
{
	char str[] = "GHGTD";
	printf ("%s\n", str);
	ft_strlowcase(str);
	printf ("%s", str);
}*/
