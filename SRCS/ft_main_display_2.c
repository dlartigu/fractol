/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_display_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 16:39:12 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/24 16:39:13 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	ft_choosenfract(t_map *fract)
{
	if (ft_strcmp(fract->fractal, "julia") == 0)
		ft_fract_full(fract, 1);
	else if (ft_strcmp(fract->fractal, "mandelbrot") == 0)
		ft_fract_full(fract, 2);
	else if (ft_strcmp(fract->fractal, "burningship") == 0)
		ft_fract_full(fract, 3);
	else if (ft_strcmp(fract->fractal, "tridel") == 0)
		ft_fract_full(fract, 4);
	else if (ft_strcmp(fract->fractal, "hawk") == 0)
		ft_fract_full(fract, 5);
	else if (ft_strcmp(fract->fractal, "hexalban") == 0)
		ft_fract_full(fract, 6);
	else if (ft_strcmp(fract->fractal, "tricorn") == 0)
		ft_fract_full(fract, 7);
}

void	ft_draw1(t_map *fract, int x, int y)
{
	double	a;
	double	b;

	a = (x * (fract->maxre_minre)
			/ fract->win_width + fract->minre);
	b = (y * (fract->maxim_minim)
			/ fract->win_hight + fract->minim);
	if (fract->swit == 0)
	{
		if (fract->flag == 1)
			ft_pixel_put(fract, x, y, ft_julia(fract, a, b));
		else if (fract->flag == 2)
			ft_pixel_put(fract, x, y, ft_mandelbrot(fract, a, b));
		else if (fract->flag == 3)
			ft_pixel_put(fract, x, y, ft_burningship(fract, a, b));
		else if (fract->flag == 4)
			ft_pixel_put(fract, x, y, ft_tridel(fract, a, b));
		else if (fract->flag == 5)
			ft_pixel_put(fract, x, y, ft_hawk(fract, a, b));
		else if (fract->flag == 6)
			ft_pixel_put(fract, x, y, ft_hexalban(fract, a, b));
		else if (fract->flag == 7)
			ft_pixel_put(fract, x, y, ft_tricorn(fract, a, b));
	}
}

void	ft_draw2(t_map *fract, int x, int y)
{
	double	a;
	double	b;

	a = (x * (fract->maxre_minre)
			/ fract->win_width + fract->minre);
	b = (y * (fract->maxim_minim)
			/ fract->win_hight + fract->minim);
	if (fract->swit == 1)
	{
		if (fract->flag == 1)
			ft_pixel_put(fract, x, y, ft_julia_2(fract, a, b));
		else if (fract->flag == 2)
			ft_pixel_put(fract, x, y, ft_mandelbrot_2(fract, a, b));
		else if (fract->flag == 3)
			ft_pixel_put(fract, x, y, ft_burningship_2(fract, a, b));
		else if (fract->flag == 4)
			ft_pixel_put(fract, x, y, ft_tridel_2(fract, a, b));
		else if (fract->flag == 5)
			ft_pixel_put(fract, x, y, ft_hawk_2(fract, a, b));
		else if (fract->flag == 6)
			ft_pixel_put(fract, x, y, ft_hexalban_2(fract, a, b));
		else if (fract->flag == 7)
			ft_pixel_put(fract, x, y, ft_tricorn_2(fract, a, b));
	}
}

void	ft_draw3(t_map *fract, int x, int y)
{
	double	a;
	double	b;

	a = (x * (fract->maxre_minre)
			/ fract->win_width + fract->minre);
	b = (y * (fract->maxim_minim)
			/ fract->win_hight + fract->minim);
	if (fract->swit == 2)
	{
		if (fract->flag == 1)
			ft_pixel_put(fract, x, y, ft_julia_3(fract, a, b));
		else if (fract->flag == 2)
			ft_pixel_put(fract, x, y, ft_mandelbrot_3(fract, a, b));
		else if (fract->flag == 3)
			ft_pixel_put(fract, x, y, ft_burningship_3(fract, a, b));
		else if (fract->flag == 4)
			ft_pixel_put(fract, x, y, ft_tridel_3(fract, a, b));
		else if (fract->flag == 5)
			ft_pixel_put(fract, x, y, ft_hawk_3(fract, a, b));
		else if (fract->flag == 6)
			ft_pixel_put(fract, x, y, ft_hexalban_3(fract, a, b));
		else if (fract->flag == 7)
			ft_pixel_put(fract, x, y, ft_tricorn_3(fract, a, b));
	}
}
