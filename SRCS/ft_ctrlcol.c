/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctrlcol.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 16:36:46 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/24 16:36:47 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

void	ft_sw_col(int keycode, t_map *fract)
{
	if (keycode == 83)
		fract->col = 0;
	else if (keycode == 84)
		fract->col = 1;
	else if (keycode == 85)
		fract->col = 2;
	else if (keycode == 86)
		fract->col = 3;
	else if (keycode == 87)
		fract->col = 4;
	else if (keycode == 88)
		fract->col = 5;
	else if (keycode == 89)
		fract->col = 6;
	else if (keycode == 91)
		fract->col = 7;
}
