/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:57:54 by gueberso          #+#    #+#             */
/*   Updated: 2024/10/28 15:36:29 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (i < 10)
	{
		ft_putchar(a + 48);
		i++;
		a++;
	}
}
