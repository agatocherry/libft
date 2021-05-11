/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:16:03 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/11 11:00:37 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexa_lower(unsigned long long int nb)
{
	char	hexa[16];
	int		i;
	int		j;

	i = 0;
	while (i < 10)
	{
		hexa[i] = '0' + i;
		i++;
	}
	j = 0;
	while (j < 6)
	{
		hexa[i] = 'a' + j;
		j++;
		i++;
	}
	hexa[i] = '\0';
	if (nb >= 16)
	{
		ft_puthexa_lower(nb / 16);
		ft_putchar(hexa[nb % 16]);
	}
	else
		ft_putchar(hexa[nb % 16]);
}
