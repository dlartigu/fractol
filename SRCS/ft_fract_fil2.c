/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fract_fil2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:17:27 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/19 10:17:28 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

t_map	*ft_fil_hex(t_map *fract)
{
	fract->flag = 6;
	fract->julia_a = -0.800;
	fract->julia_b = 0.156;
	fract->minre = -1.8;
	fract->maxre = 1.8;
	fract->minim = -1.008;
	fract->maxim = fract->minim + (fract->maxre - fract->minre)
		* fract->win_hight / fract->win_width;
	return (fract);
}

t_map	*ft_fil_tridel(t_map *fract)
{
	fract->flag = 4;
	fract->minre = -2.5;
	fract->maxre = 2.5;
	fract->minim = -1.4;
	fract->maxim = fract->minim + (fract->maxre - fract->minre)
		* fract->win_hight / fract->win_width;
	return (fract);
}

t_map	*ft_fil_hawk(t_map *fract)
{
	fract->flag = 5;
	fract->minre = -1.8;
	fract->maxre = 1.5;
	fract->minim = -1.05;
	fract->maxim = fract->minim + (fract->maxre - fract->minre)
		* fract->win_hight / fract->win_width;
	return (fract);
}

t_map	*ft_fil_tricorn(t_map *fract)
{
	fract->flag = 7;
	fract->minre = -1.7;
	fract->maxre = 1;
	fract->minim = -0.76;
	fract->maxim = fract->minim + (fract->maxre - fract->minre)
		* fract->win_hight / fract->win_width;
	return (fract);
}
