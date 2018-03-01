/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashcode.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpolosuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 20:30:59 by dpolosuk          #+#    #+#             */
/*   Updated: 2018/03/01 21:17:25 by dpolosuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHCODE_H
# define HASHCODE_H

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

typedef struct		s_input
{
	unsigned int	rows;
	unsigned int	columns;
	unsigned int	vehicles;
	unsigned int	rides;
	unsigned int	steps;
}					t_input;

typedef struct		s_ride
{
	unsigned int	start[2];
	unsigned int	finish[2];
	unsigned int	l_start;
	unsigned int	l_finish;
	unsigned int	n_of_ride;
}					t_ride;
#endif
