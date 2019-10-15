/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkname.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 13:57:48 by dlartigu          #+#    #+#             */
/*   Updated: 2019/08/27 13:57:49 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/fractol.h"

int		ft_checkname(int ac, char **av)
{
	if (ac != 2)
		return (-1);
	if (ft_strcmp(av[1], "julia") == 0 || ft_strcmp(av[1], "mandelbrot") == 0
		|| ft_strcmp(av[1], "burningship") == 0
		|| ft_strcmp(av[1], "tridel") == 0
		|| ft_strcmp(av[1], "hawk") == 0 || ft_strcmp(av[1], "hexalban") == 0
		|| ft_strcmp(av[1], "tricorn") == 0)
		return (0);
	else
		return (-1);
	return (0);
}
