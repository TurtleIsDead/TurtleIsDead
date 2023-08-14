/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:13:35 by asobor            #+#    #+#             */
/*   Updated: 2023/06/21 18:21:38 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	b;	

	b = 0;
	while (s1[b] && (s1[b] == s2[b]))
	{
		b++;
	}
	return (s1[b] - s2[b]);
}
/*#include <stdio.h>
int main(void)
{
	char s1[] = "Abjkm";
	char s2[] = "Abjkm";
	printf ("%d", ft_strcmp(s1, s2));
	return (0);
}*/
