/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filcolor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:37:02 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/09 11:37:03 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		ft_colbrouillon(int i)
{
	int		r;
	int		g;
	int		b;

	r = (rand() * 1000000) + i;
	g = (rand() * 10000) + i;
	b = (rand() * 100) + i;
	return (r + g + b);
}

int		ft_psy(int i)
{
	return ((i * 255 / 50) * 1000000);
}

int		ft_blackblue(int i)
{
	return (i * 255 / 50);
}

int		ft_blue_to_white(int i)
{
	if (i % 5 == 1)
		return (0x7AD7F0);
	else if (i % 5 == 2)
		return (0x92DFF3);
	else if (i % 5 == 3)
		return (0xB7E9F7);
	else if (i % 5 == 4)
		return (0xDBF3FA);
	else if (i % 5 == 5)
		return (0xF5FCFF);
	return (COL_WH);
}

int		ft_filcolor(t_map *fract, int i)
{
	if (fract->col == 0)
		return (ft_blue_to_white(i));
	else if (fract->col == 1)
		return (ft_colbrouillon(i));
	else if (fract->col == 2)
		return (ft_blackblue(i));
	else if (fract->col == 3)
		return (ft_psy(i));
	else if (fract->col == 4)
		return (ft_blackred(i));
	else if (fract->col == 5)
		return (ft_blackgreen(i));
	else if (fract->col == 6)
		return (ft_mandelbleu(i));
	else if (fract->col == 7)
		return (ft_mburning(i));
	return (0);
}
