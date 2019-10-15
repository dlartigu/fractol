/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:42:50 by dlartigu          #+#    #+#             */
/*   Updated: 2019/08/12 14:42:51 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	ft_pixel_put(t_map *fract, int x, int y, unsigned int color)
{
	char	*ptr;
	int		i;

	i = -1;
	ptr = (char *)&color;
	if (x >= fract->win_width || y >= fract->win_hight || x < 0 || y < 0)
		return ;
	while (++i < fract->bpp)
	{
		fract->pixel_buffer[(fract->sizeline * y)
			+ (x * fract->bpp) + i] = ptr[i];
	}
}
