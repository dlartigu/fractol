/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 10:49:15 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/30 17:07:49 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		ft_exit(t_map *fract)
{
	mlx_destroy_image(fract->mlx_ptr, fract->img_ptr);
	mlx_clear_window(fract->mlx_ptr, fract->window_ptr);
	mlx_destroy_window(fract->mlx_ptr, fract->window_ptr);
	exit(0);
	return (0);
}
