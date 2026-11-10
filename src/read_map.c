/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurmach <anurmach@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:55:24 by anurmach          #+#    #+#             */
/*   Updated: 2026/11/07 16:49:23 by anurmach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	check_extension(char	*s)
{
	size_t	len;

	len = ft_strlen(s);
	if (len < EXT_NUM)
		return (0);
	if (!ft_strncmp(&s[len - EXT_NUM], EXTENSION, EXT_NUM + 1))
		return (1);
	else
		return (0);
}

char	*readmap(char	*file)
{
	int		fd;
	char	*map;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (print_error(3), NULL);
	map = readmap2(fd);
	close(fd);
	return (map);
}
