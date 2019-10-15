/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mburnin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 14:27:12 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/30 14:27:13 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		ft_mburning_2(int i)
{
	if (i % 16 == 1)
		return (0xFF2E00);
	if (i % 15 == 2)
		return (0xFF2E00);
	if (i % 14 == 3)
		return (0xFF3D00);
	if (i % 13 == 4)
		return (0xFF4D00);
	if (i % 12 == 5)
		return (0xFF5D00);
	if (i % 11 == 6)
		return (0xFF6D00);
	if (i % 10 == 7)
		return (0xFF7D00);
	if (i % 9 == 8)
		return (0xFF8D00);
	return (0);
}

int		ft_mburning(int i)
{
	if (ft_mburning_2(i) != 0)
		return (ft_mburning_2(i));
	if (i % 8 == 9)
		return (0xFF9D00);
	if (i % 7 == 10)
		return (0xFFAB00);
	if (i % 6 == 11)
		return (0xFFBB00);
	if (i % 5 == 12)
		return (0xFFC833);
	if (i % 4 == 13)
		return (0xFFD666);
	if (i % 3 == 14)
		return (0xFFE399);
	if (i % 2 == 15)
		return (0xFFF1CC);
	return (COL_BLACK);
}
