/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:22:16 by asobor            #+#    #+#             */
/*   Updated: 2023/06/24 15:52:40 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;	

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main(void)
{
	char str1[] = "AXfhgiK";
	char str2[] = "AXFhJik";
	printf ("%d", ft_strncmp(str1, str2, 0));
	return (0);
}*/
