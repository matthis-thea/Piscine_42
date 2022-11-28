/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:59:43 by mthea             #+#    #+#             */
/*   Updated: 2022/07/14 13:13:38 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	characteres;
	int		b;

	b = 0;
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		nb = -(nb + ++b);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	characteres = '0' + nb % 10;
	nb = nb / 10;
	if (nb != 0)
		ft_putnbr(nb);
	if (b == 1)
		characteres++;
	write(1, &characteres, 1);
}
