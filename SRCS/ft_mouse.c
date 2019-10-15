/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:31:45 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/11 11:31:45 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int			ft_mousemove(int x, int y, void *param)
{
	t_map	*fract;

	fract = (t_map *)param;
	if (fract->movejulia == 1)
	{
		fract->julia_a = ((double)x / fract->win_width)
		* (fract->maxre_minre) + fract->minre;
		fract->julia_b = ((double)y / fract->win_hight)
		* (fract->maxim_minim) + fract->minim;
		fract->maxre_minre = fract->maxre - fract->minre;
		fract->maxim_minim = fract->maxim - fract->minim;
		fract->x_pos = x;
		fract->y_pos = y;
	}
	return (1);
}

t_map		*ft_mousezoom(t_map *fract)
{
	double	mouse;

	mouse = fract->mouse4 - fract->mouse5;
	fract->minre = fract->minre + mouse * fract->maxre_minre / 10
	* (fract->x_pos / fract->win_width);
	fract->maxre = fract->maxre - mouse * fract->maxre_minre / 10
	* (fract->x_pos / fract->win_width);
	fract->minim = fract->minim + mouse * fract->maxim_minim / 10
	* (fract->y_pos / fract->win_hight);
	fract->maxim = fract->minim + (fract->maxre - fract->minre)
	* fract->win_hight / fract->win_width;
	fract->max_iter++;
	fract->maxre_minre = fract->maxre - fract->minre;
	fract->maxim_minim = fract->maxim - fract->minim;
	return (fract);
}

int			ft_mouse(int button, int x, int y, void *param)
{
	t_map	*fract;

	fract = (t_map *)param;
	x = 0;
	y = 0;
	if (button == 4)
	{
		fract->mouse4 = 1;
		fract->mouse5 = 0;
	}
	else if (button == 5)
	{
		fract->mouse4 = 0;
		fract->mouse5 = 1;
	}
	else if (button == 1)
		fract->movejulia = fract->movejulia == 1 ? 0 : 1;
	else
		return (0);
	ft_mousezoom(fract);
	return (1);
}
