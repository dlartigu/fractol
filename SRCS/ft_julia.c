/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:31:25 by dlartigu          #+#    #+#             */
/*   Updated: 2019/08/27 15:31:26 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		ft_julia_3(t_map *fract, double a, double b)
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
		b = (a + a) * b;
		a = tmp_a;
		a = za + a;
		b = zb + b;
		if (a * a - b * b > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}

int		ft_julia_2(t_map *fract, double a, double b)
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
		b = (a + a) * b;
		a = tmp_a;
		a = za + a;
		b = zb + b;
		if (a * a * b * b > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}

int		ft_julia(t_map *fract, double a, double b)
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
		b = (a + a) * b;
		a = tmp_a;
		a = za + a;
		b = zb + b;
		if (a * a + b * b > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}
