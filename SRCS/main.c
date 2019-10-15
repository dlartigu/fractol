/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:22:04 by dlartigu          #+#    #+#             */
/*   Updated: 2019/09/24 17:22:05 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		main(int ac, char **av)
{
	t_map	fract;
	char	*str;

	str = "|!| FDF - dlartigu - Fract'ol - ";
	if (ft_checkname(ac, av) != 0)
	{
		ft_putendl_fd("Usage : ./fractol <fractal name>", 2);
		ft_putendl_fd("[julia		| mandelbrot", 2);
		ft_putendl_fd("[burningship	| tridel", 2);
		ft_putendl_fd("[hawk		| hexalban", 2);
		ft_putendl_fd("[tricorn", 2);
		return (-1);
	}
	ft_memset(&fract, 0, sizeof(t_map));
	fract.name = str;
	fract.fractal = av[1];
	ft_main_display(&fract);
	return (0);
}
