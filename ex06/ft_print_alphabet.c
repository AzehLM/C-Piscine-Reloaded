/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:52:53 by gueberso          #+#    #+#             */
/*   Updated: 2024/10/28 15:36:23 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int		i;
	char	a;

	a = 'a';
	i = 0;
	while (i < 26)
	{
		ft_putchar(a);
		i++;
		a++;
	}
}
