/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurmach <anurmach@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:55:24 by anurmach          #+#    #+#             */
/*   Updated: 2026/11/07 16:49:23 by anurmach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int argc, char	**argv)
{
	char	*map;

	if (argc != 2)
		return (print_error(1), 1);
	if (!check_extension(argv[1]))
		return (print_error(2), 2);
	map = readmap(argv[1]);
	if (!map)
		return (3);
	free(map);
	return (0);
}
