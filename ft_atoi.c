/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:11:44 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/02 19:08:20 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	long long	result;
	int			znak;

	i = 0;
	result = 0;
	znak = 1;
	while ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	if (str[i] == '-')
		znak = -1;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		if (result * 10 + (znak * (str[i] - '0')) < result && znak > 0)
			return (-1);
		if (result * 10 + (znak * (str[i] - '0')) > result && znak < 0)
			return (0);
		result = result * 10 + znak *(str[i] - '0');
		i++;
	}
	return (result);
}
