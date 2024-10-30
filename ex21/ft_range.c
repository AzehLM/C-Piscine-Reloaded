/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:17:50 by gueberso          #+#    #+#             */
/*   Updated: 2024/10/30 11:21:48 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int min, int max)
{
	int	abs;

	abs = max - min;
	if (abs < 0)
		abs *= -1;
	return (abs);
}

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (ft_abs(min, max)));
	if (!tab)
		return (NULL);
	i = -1;
	while (min != max)
	{
		tab[++i] = min;
		min++;
	}
	return (tab);
}
