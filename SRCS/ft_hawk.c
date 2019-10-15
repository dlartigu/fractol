/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hawk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:45:55 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/19 10:45:56 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		ft_hawk_3(t_map *fract, double a, double b)
{
	double	tmp_a;
	double	tmp_b;
	double	za;
	double	zb;
	int		i;

	za = 0;
	zb = 0;
	i = -1;
	while (++i < fract->max_iter)
	{
		tmp_a = fabs(za);
		tmp_b = fabs(zb);
		za = tmp_a * tmp_a * tmp_a
		- ((tmp_a + tmp_a + tmp_a) * (tmp_b * tmp_b));
		zb = ((3 * (tmp_a * tmp_a) * tmp_b) - tmp_b * tmp_b * tmp_b);
		za = za + a;
		zb = zb + b;
		if (za * za - zb * zb > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}

int		ft_hawk_2(t_map *fract, double a, double b)
{
	double	tmp_a;
	double	tmp_b;
	double	za;
	double	zb;
	int		i;

	za = 0;
	zb = 0;
	i = -1;
	while (++i < fract->max_iter)
	{
		tmp_a = fabs(za);
		tmp_b = fabs(zb);
		za = tmp_a * tmp_a * tmp_a
		- ((tmp_a + tmp_a + tmp_a) * (tmp_b * tmp_b));
		zb = ((3 * (tmp_a * tmp_a) * tmp_b) - tmp_b * tmp_b * tmp_b);
		za = za + a;
		zb = zb + b;
		if (za * za * zb * zb > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}

int		ft_hawk(t_map *fract, double a, double b)
{
	double	tmp_a;
	double	tmp_b;
	double	za;
	double	zb;
	int		i;

	za = 0;
	zb = 0;
	i = -1;
	while (++i < fract->max_iter)
	{
		tmp_a = fabs(za);
		tmp_b = fabs(zb);
		za = tmp_a * tmp_a * tmp_a
		- ((tmp_a + tmp_a + tmp_a) * (tmp_b * tmp_b));
		zb = ((3 * (tmp_a * tmp_a) * tmp_b) - tmp_b * tmp_b * tmp_b);
		za = za + a;
		zb = zb + b;
		if (za * za + zb * zb > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}
