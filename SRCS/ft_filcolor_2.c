/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filcolor_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:56:52 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/24 14:56:53 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		ft_blackred(int i)
{
	return (i * 255 / 50 << 16);
}

int		ft_blackgreen(int i)
{
	return (i * 255 / 50 << 8);
}

int		ft_mandelbleu2(int i)
{
	if (i % 16 == 1)
		return (0x421E0F);
	if (i % 15 == 2)
		return (0x19071A);
	if (i % 14 == 3)
		return (0x09072F);
	if (i % 13 == 4)
		return (0x040449);
	if (i % 12 == 5)
		return (0x000464);
	if (i % 11 == 6)
		return (0x0C2C8A);
	if (i % 10 == 7)
		return (0x1852B1);
	if (i % 9 == 8)
		return (0x397DD1);
	if (i % 8 == 9)
		return (0x86B5E5);
	return (0);
}

int		ft_mandelbleu(int i)
{
	if (ft_mandelbleu2(i) != 0)
		return (ft_mandelbleu2(i));
	if (i % 7 == 10)
		return (0xD3ECF8);
	if (i % 6 == 11)
		return (0xF1E9BF);
	if (i % 5 == 12)
		return (0xF8C95F);
	if (i % 4 == 13)
		return (0xFFAA00);
	if (i % 3 == 14)
		return (0xCC8000);
	if (i % 2 == 15)
		return (0x995700);
	if (i % 1 == 16)
		return (0x6A3403);
	return (COL_BLACK);
}
