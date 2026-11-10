/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurmach <anurmach@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:55:24 by anurmach          #+#    #+#             */
/*   Updated: 2026/11/07 16:49:23 by anurmach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	print_error(int error)
{
	ft_putstr_fd(ERROR, STDERR_FILENO);
	if (error == 1)
		ft_putstr_fd(WRONG_ARGS, STDERR_FILENO);
	if (error == 2)
		ft_putstr_fd(WRONG_EXT, STDERR_FILENO);
	if (error == 3)
		ft_putstr_fd(WRONG_FILE, STDERR_FILENO);
	if (error == 4)
		ft_putstr_fd(WRONG_READ, STDERR_FILENO);
	if (error == 5)
		ft_putstr_fd(WRONG_MEMORY, STDERR_FILENO);
}
