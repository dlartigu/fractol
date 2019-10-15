/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 16:24:27 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/24 16:24:27 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

t_map	*ft_init(t_map *fract)
{
	fract->mlx_ptr = mlx_init();
	fract->window_ptr = mlx_new_window(fract->mlx_ptr, fract->win_width,
	fract->win_hight, fract->name);
	fract->img_ptr = mlx_new_image(fract->mlx_ptr,
	fract->win_width, fract->win_hight);
	fract->pixel_buffer = mlx_get_data_addr(fract->img_ptr,
		&fract->bpp, &fract->sizeline, &fract->endian);
	fract->bpp = fract->bpp / 8;
	return (fract);
}
