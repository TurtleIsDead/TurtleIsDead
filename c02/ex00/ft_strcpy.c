/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:07:27 by asobor            #+#    #+#             */
/*   Updated: 2023/06/20 18:43:58 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;	

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char dest1[] = "Bigger not big enough";
	char src1[] = "Ricardo";

	printf("%s\n%s\n", dest1, src1);
	ft_strcpy(dest1, src1);
	printf("%s\n%s", dest1, src1);
	return (0);
}*/
