/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 13:58:19 by dlartigu          #+#    #+#             */
/*   Updated: 2019/08/27 13:58:20 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define NB_THREADS 8
# include "../libft/libft.h"
# include <math.h>
# include "struct.h"
# include "colors.h"
# include "keys.h"
# include <mlx.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <stdint.h>
# include <pthread.h>

int		main(int ac, char **av);
int		ft_thread(t_map *fract);
int		ft_checkname(int ac, char **av);
void	*ft_main_display(t_map *fract);
void	ft_draw1(t_map *fract, int x, int y);
void	ft_draw2(t_map *fract, int x, int y);
void	ft_draw3(t_map *fract, int x, int y);
void	ft_choosenfract(t_map *fract);

t_map	*ft_init(t_map *fract);
t_map	*ft_fract_fil(t_map *fract);
t_map	*ft_fract_full(t_map *fract, int flag);
t_map	*ft_fil_julia(t_map *fract);
t_map	*ft_fil_mandel(t_map *fract);
t_map	*ft_fil_burn(t_map *fract);
t_map	*ft_fil_tridel(t_map *fract);
t_map	*ft_fil_hawk(t_map *fract);
t_map	*ft_fil_hex(t_map *fract);
t_map	*ft_fil_tricorn(t_map *fract);

int		ft_exit(t_map *fract);
int		ft_control(int keycode, t_map *fract);
void	ft_controliter(int keycode, t_map *fract);
void	ft_switch2(int keycode, t_map *fract);
void	ft_controlreset(int keycode, t_map *fract);

int		ft_mouse(int button, int x, int y, void *param);
int		ft_mousemove(int x, int y, void *param);
t_map	*ft_mousezoom(t_map *fract);

int		ft_mandelbrot(t_map *fract, double a, double b);
int		ft_mandelbrot_2(t_map *fract, double a, double b);
int		ft_mandelbrot_3(t_map *fract, double a, double b);
int		ft_tridel(t_map *fract, double a, double b);
int		ft_tridel_2(t_map *fract, double a, double b);
int		ft_tridel_3(t_map *fract, double a, double b);
int		ft_julia(t_map *fract, double a, double b);
int		ft_julia_2(t_map *fract, double a, double b);
int		ft_julia_3(t_map *fract, double a, double b);
int		ft_burningship(t_map *fract, double a, double b);
int		ft_burningship_2(t_map *fract, double a, double b);
int		ft_burningship_3(t_map *fract, double a, double b);
int		ft_hawk(t_map *fract, double a, double b);
int		ft_hawk_2(t_map *fract, double a, double b);
int		ft_hawk_3(t_map *fract, double a, double b);
int		ft_hexalban(t_map *fract, double a, double b);
int		ft_hexalban_2(t_map *fract, double a, double b);
int		ft_hexalban_3(t_map *fract, double a, double b);
int		ft_tricorn(t_map *fract, double a, double b);
int		ft_tricorn_2(t_map *fract, double a, double b);
int		ft_tricorn_3(t_map *fract, double a, double b);

void	*ft_draw(t_th *thc);

void	ft_pixel_put(t_map *fract, int x, int y, unsigned int color);
void	ft_sw_col(int keycode, t_map *fract);
int		ft_filcolor(t_map *fract, int i);
int		ft_blackred(int i);
int		ft_colbrouillon(int i);
int		ft_psy(int i);
int		ft_blackblue(int i);
int		ft_blackgreen(int i);
int		ft_blue_to_white(int i);
int		ft_mandelbleu(int i);
int		ft_mandelbleu_2(int i);
int		ft_mburning(int i);
int		ft_mburning_2(int i);
void	ft_swui(int keycode, t_map *fract);
void	ft_dispui(t_map *fract);
#endif
