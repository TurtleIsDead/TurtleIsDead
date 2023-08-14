/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:40:02 by asobor            #+#    #+#             */
/*   Updated: 2023/06/29 17:46:13 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		a;	

	a = 0;
	while (src[a] != '\0')
		a++;
	dest = malloc(sizeof(src) * a);
	a = 0;
	if (dest == NULL)
		return (0);
	else
	{
		while (src[a] != '\0')
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
		return (dest);
	}
}
/*#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_strdup("Hello World!"));
}*/
