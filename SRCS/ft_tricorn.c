/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tricorn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 11:29:37 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/24 11:29:40 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		ft_tricorn_3(t_map *fract, double a, double b)
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
		tmp_a = za;
		tmp_b = zb;
		za = tmp_a * tmp_a - tmp_b * tmp_b;
		zb = -2 * tmp_a * tmp_b;
		za = za + a;
		zb = zb + b;
		if (za * za - zb * zb > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}

int		ft_tricorn_2(t_map *fract, double a, double b)
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
		tmp_a = za;
		tmp_b = zb;
		za = tmp_a * tmp_a - tmp_b * tmp_b;
		zb = -2 * tmp_a * tmp_b;
		za = za + a;
		zb = zb + b;
		if (za * za * zb * zb > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}

int		ft_tricorn(t_map *fract, double a, double b)
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
		tmp_a = za;
		tmp_b = zb;
		za = tmp_a * tmp_a - tmp_b * tmp_b;
		zb = -2 * tmp_a * tmp_b;
		za = za + a;
		zb = zb + b;
		if (za * za + zb * zb > 4)
			return (ft_filcolor(fract, i));
	}
	return (COL_BLACK);
}
