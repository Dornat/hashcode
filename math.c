/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 21:19:06 by avolgin           #+#    #+#             */
/*   Updated: 2018/03/01 21:28:07 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashcode.h"

void		ft_math(t_ride *cars)
{
	int		distance;
	int		start_orig_dist;

	cars->distance = fabs(start[0] - finish[1]) + fabs(start[1] - finish[1]);
	cars->start_origin_dist = start[0] + start[1];

}
