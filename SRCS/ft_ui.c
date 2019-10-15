/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ui.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 11:39:31 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/30 11:39:33 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	ft_dispui(t_map *fract)
{
	mlx_string_put(fract->mlx_ptr, fract->window_ptr,
	10, 10, COL_WH, "Arrows to move");
	mlx_string_put(fract->mlx_ptr, fract->window_ptr,
	10, 35, COL_WH, "R to reset settings");
	mlx_string_put(fract->mlx_ptr, fract->window_ptr,
	10, 60, COL_WH, "Mouse Wheel to zoom in or out");
	mlx_string_put(fract->mlx_ptr, fract->window_ptr,
	10, 85, COL_WH, "NUM 1 to 7 to change Fractals");
	mlx_string_put(fract->mlx_ptr, fract->window_ptr,
	10, 110, COL_WH, "S and D to switch fractal mode");
	mlx_string_put(fract->mlx_ptr, fract->window_ptr,
	10, 135, COL_WH, "NUM PAD 1 to 9 To change colors");
}
