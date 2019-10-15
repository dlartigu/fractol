/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_display.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:21:12 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/24 17:21:14 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int			ft_thread(t_map *fract)
{
	int		i;
	t_th	thc[8];

	i = -1;
	while (++i < NB_THREADS)
	{
		thc[i].fract = fract;
		thc[i].start = fract->win_width / 8 * i;
		thc[i].end = fract->win_width / 8 * (i + 1);
		pthread_create(&fract->threads[i], NULL, (void*)ft_draw, &thc[i]);
	}
	i = -1;
	while (++i < NB_THREADS)
		pthread_join(fract->threads[i], 0);
	mlx_put_image_to_window(fract->mlx_ptr,
	fract->window_ptr, fract->img_ptr, 0, 0);
	if (fract->swui == 1)
		ft_dispui(fract);
	return (0);
}

void		*ft_draw(t_th *thc)
{
	int		x;
	int		y;

	x = thc->start - 1;
	while (++x < thc->end)
	{
		y = -1;
		while (++y < thc->fract->win_hight)
		{
			ft_draw1(thc->fract, x, y);
			ft_draw2(thc->fract, x, y);
			ft_draw3(thc->fract, x, y);
		}
	}
	pthread_exit(NULL);
	return (NULL);
}

void		*ft_main_display(t_map *fract)
{
	ft_fract_fil(fract);
	ft_memset((void *)fract->pixel_buffer,
	0, fract->sizeline * fract->win_hight);
	ft_init(fract);
	ft_choosenfract(fract);
	mlx_hook(fract->window_ptr, 4, 5, &ft_mouse, fract);
	mlx_hook(fract->window_ptr, 6, 5, &ft_mousemove, fract);
	mlx_hook(fract->window_ptr, 2, 5, &ft_control, fract);
	mlx_hook(fract->window_ptr, 17, 0, &ft_exit, fract);
	mlx_loop_hook(fract->mlx_ptr, &ft_thread, fract);
	mlx_loop(fract->mlx_ptr);
	return (NULL);
}
