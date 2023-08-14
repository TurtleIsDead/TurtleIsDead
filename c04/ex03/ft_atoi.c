/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:50:27 by asobor            #+#    #+#             */
/*   Updated: 2023/06/24 19:19:13 by asobor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus;
	int	s;
	int	nb;

	minus = 1;
	s = 0;
	nb = 0;
	while (str[s] == '\n' || str[s] == '\v' || str[s] == '\f' || str[s] == '\r'
		|| str[s] == '\t' || str[s] == ' ')
		s++;
	while (str[s] == '-' || str[s] == '+')
	{
		if (str[s] == '-')
			minus *= -1;
		s++;
	}
	while (str[s] >= '0' && str[s] <= '9')
	{
		nb = (nb * 10) + (str[s] - '0');
		s++;
	}
	nb *= minus;
	return (nb);
}
/*#include <stdio.h>
int main(void)
{
	printf ("%d", ft_atoi("	 ---+--+1234ab567"));
}*/
