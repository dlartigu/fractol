/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 13:28:25 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/02 13:28:26 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	ft_controlpad(int keycode, t_map *fract)
{
	if (keycode == 123)
	{
		fract->minre = fract->minre + 0.025;
		fract->maxre = fract->maxre + 0.025;
	}
	else if (keycode == 124)
	{
		fract->minre = fract->minre - 0.025;
		fract->maxre = fract->maxre - 0.025;
	}
	else if (keycode == 126)
	{
		fract->minim = fract->minim + 0.025;
		fract->maxim = fract->maxim + 0.025;
	}
	else if (keycode == 125)
	{
		fract->minim = fract->minim - 0.025;
		fract->maxim = fract->maxim - 0.025;
	}
	fract->maxre_minre = fract->maxre - fract->minre;
	fract->maxim_minim = fract->maxim - fract->minim;
}

void	ft_controlreset(int keycode, t_map *fract)
{
	if (keycode == 53)
		ft_exit(fract);
	else if (keycode == 15)
		ft_fract_full(fract, fract->flag);
	else if (keycode == 69)
		fract->max_iter++;
	else if (keycode == 78)
		fract->max_iter--;
}

void	ft_switch2(int keycode, t_map *fract)
{
	if (keycode == 1)
		fract->swit = fract->swit == 1 ? 0 : 1;
	else if (keycode == 2)
		fract->swit = fract->swit == 1 ? 2 : 1;
	else if (keycode == 2)
		fract->swit = fract->swit == 0 ? 2 : 0;
	else if (keycode == 82)
		fract->swui = fract->swui == 0 ? 1 : 0;
}

void	ft_control_2(int keycode, t_map *fract)
{
	if (keycode == 21)
	{
		ft_fract_fil(fract);
		ft_fract_full(fract, 4);
	}
	else if (keycode == 23)
	{
		ft_fract_fil(fract);
		ft_fract_full(fract, 5);
	}
	else if (keycode == 22)
	{
		ft_fract_fil(fract);
		ft_fract_full(fract, 6);
	}
	else if (keycode == 26)
	{
		ft_fract_fil(fract);
		ft_fract_full(fract, 7);
	}
}

int		ft_control(int keycode, t_map *fract)
{
	ft_controlpad(keycode, fract);
	ft_controlreset(keycode, fract);
	ft_switch2(keycode, fract);
	ft_sw_col(keycode, fract);
	ft_control_2(keycode, fract);
	if (keycode == 18)
		ft_fract_full(fract, 1);
	else if (keycode == 19)
		ft_fract_full(fract, 2);
	else if (keycode == 20)
		ft_fract_full(fract, 3);
	else
		return (0);
	ft_fract_fil(fract);
	return (1);
}
