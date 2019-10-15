/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 13:36:24 by dlartigu          #+#    #+#             */
/*   Updated: 2019/08/27 13:36:28 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_STRUCT_H
# define FRACTOL_STRUCT_H
# include <pthread.h>

typedef struct		s_map
{
	char			*name;
	char			*fractal;
	char			*pixel_buffer;
	double			win_hight;
	double			win_width;
	double			minre;
	double			maxre;
	double			minim;
	double			maxim;
	double			maxre_minre;
	double			maxim_minim;
	double			julia_a;
	double			julia_b;
	double			mouse4;
	double			mouse5;
	int				movejulia;
	int				swui;
	int				origin;
	int				col;
	int				swit;
	int				max_iter;
	int				flag;
	int				bpp;
	int				sizeline;
	int				endian;
	int				res;
	int				x_pos;
	int				y_pos;
	int				x;
	int				x2;
	int				x3;
	int				y;
	int				y2;
	int				y3;
	void			*mlx_ptr;
	void			*img_ptr;
	void			*window_ptr;
	pthread_t		threads[NB_THREADS];
}					t_map;

typedef struct		s_th
{
	t_map			*fract;
	int				start;
	int				end;
}					t_th;
#endif
