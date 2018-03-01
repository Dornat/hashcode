/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpolosuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 20:42:07 by dpolosuk          #+#    #+#             */
/*   Updated: 2018/03/01 21:12:21 by dpolosuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashcode.h"

void	parse_first_line(t_input *fl, char *line)
{
	char	**res = ft_strsplit(line, ' ');
	fl->rows = (unsigned int)atoi(res[0]);
	fl->columns = (unsigned int)atoi(res[1]);
	fl->vehicles = (unsigned int)atoi(res[2]);
	fl->rides = (unsigned int)atoi(res[3]);
	fl->steps = (unsigned int)atoi(res[4]);
}

int		main(int ac, char **av)
{
	char		*line;
	int			fd;
	t_input		fl;
	
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		ft_strdel(&line);
	}
	return(0);
}
