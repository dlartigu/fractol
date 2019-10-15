/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalban.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:26:28 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/24 14:26:29 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		ft_hexalban_3(t_map *fract, double a, double b)
{
	double	tmp_a;
	double	za;
	double	zb;
	int		i;

	i = -1;
	za = fract->julia_a;
	zb = fract->julia_b;
	while (++i < fract->max_iter)
	{
		tmp_a = a * a - b * b;
		b = (fabs(a) + fabs(a)) * fabs(b);
		a = tmp_a;
		a = za + a;
		b = zb + b;
		if (a * a - b * b > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}

int		ft_hexalban_2(t_map *fract, double a, double b)
{
	double	tmp_a;
	double	za;
	double	zb;
	int		i;

	i = -1;
	za = fract->julia_a;
	zb = fract->julia_b;
	while (++i < fract->max_iter)
	{
		tmp_a = a * a - b * b;
		b = (fabs(a) + fabs(a)) * fabs(b);
		a = tmp_a;
		a = za + a;
		b = zb + b;
		if (a * a * b * b > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}

int		ft_hexalban(t_map *fract, double a, double b)
{
	double	tmp_a;
	double	za;
	double	zb;
	int		i;

	i = -1;
	za = fract->julia_a;
	zb = fract->julia_b;
	while (++i < fract->max_iter)
	{
		tmp_a = a * a - b * b;
		b = (fabs(a) + fabs(a)) * fabs(b);
		a = tmp_a;
		a = za + a;
		b = zb + b;
		if (a * a + b * b > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}
