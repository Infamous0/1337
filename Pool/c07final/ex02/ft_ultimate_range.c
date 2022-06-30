/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:17:14 by maboulkh          #+#    #+#             */
/*   Updated: 2022/06/29 23:11:51 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*allocrange;
	int	i;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	i = 0;
	allocrange = (int *)(malloc(sizeof(int) * size));
	if (allocrange == NULL)
		return (-1);
	while (i < size)
	{
		allocrange[i] = min + i;
		i++;
	}
	*range = allocrange;
	return (size);
}
