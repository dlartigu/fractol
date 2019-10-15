/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fract_fil.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:34:39 by dlartigu          #+#    #+#             */
/*   Updated: 2019/08/27 15:34:40 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

t_map	*ft_fil_burn(t_map *fract)
{
	fract->flag = 3;
	fract->minre = -1.95;
	fract->maxre = -1.6;
	fract->minim = -0.095;
	fract->maxim = fract->minim + (fract->maxre - fract->minre)
		* fract->win_hight / fract->win_width;
	return (fract);
}

t_map	*ft_fil_mandel(t_map *fract)
{
	fract->flag = 2;
	fract->minre = -2.5;
	fract->maxre = 1;
	fract->minim = -0.99;
	fract->maxim = fract->minim + (fract->maxre - fract->minre)
		* fract->win_hight / fract->win_width;
	return (fract);
}

t_map	*ft_fil_julia(t_map *fract)
{
	fract->flag = 1;
	fract->julia_a = -0.800;
	fract->julia_b = 0.156;
	fract->minre = -1.8;
	fract->maxre = 1.8;
	fract->minim = -1.008;
	fract->maxim = fract->minim + (fract->maxre - fract->minre)
		* fract->win_hight / fract->win_width;
	return (fract);
}

t_map	*ft_fract_full(t_map *fract, int flag)
{
	if (flag == 1)
		ft_fil_julia(fract);
	else if (flag == 2)
		ft_fil_mandel(fract);
	else if (flag == 3)
		ft_fil_burn(fract);
	else if (flag == 4)
		ft_fil_tridel(fract);
	else if (flag == 5)
		ft_fil_hawk(fract);
	else if (flag == 6)
		ft_fil_hex(fract);
	else if (flag == 7)
		ft_fil_tricorn(fract);
	fract->maxre_minre = fract->maxre - fract->minre;
	fract->maxim_minim = fract->maxim - fract->minim;
	return (fract);
}

t_map	*ft_fract_fil(t_map *fract)
{
	fract->win_hight = 504;
	fract->win_width = 896;
	fract->flag = fract->flag ? fract->flag : 0;
	fract->max_iter = 50;
	fract->swit = 0;
	fract->col = 2;
	fract->origin = 0;
	fract->mouse4 = 0;
	fract->mouse5 = 0;
	fract->swui = 0;
	fract->movejulia = 1;
	return (fract);
}
