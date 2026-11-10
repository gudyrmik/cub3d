/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlenu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurmach <anurmach@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:52:58 by anurmach          #+#    #+#             */
/*   Updated: 2025/06/15 11:53:03 by anurmach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlenu(unsigned int u, unsigned int base)
{
	int	i;

	if (!u)
		return (1);
	i = 0;
	while (u)
	{
		u /= base;
		i++;
	}
	return (i);
}
