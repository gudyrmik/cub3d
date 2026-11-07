/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurmach <anurmach@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:16:18 by anurmach          #+#    #+#             */
/*   Updated: 2026/11/07 16:39:48 by anurmach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# define EXTENSION ".cub"
# define EXT_NUM 4
# define SIZE 1024
# define ERROR "Error\n"
# define WRONG_ARGS "Wrong number of arguments!\n"
# define WRONG_EXT "Wrong extension of the file!\n"
# define WRONG_FILE "Can't open the file!\n"
# define WRONG_READ "Can't read the file!\n"
# define WRONG_EMPTY "The file is empty!\n"
# define WRONG_MEMORY "Can't allocate a memory!\n"

# include "../libft/libft.h"

/*read_map*/
int		check_extension(char	*s);
char	*readmap(char	*file);

/*errors*/
void	print_error(int error);

#endif
