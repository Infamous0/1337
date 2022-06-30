/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulkh <maboulkh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 08:53:59 by maboulkh          #+#    #+#             */
/*   Updated: 2022/06/29 22:20:14 by maboulkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	if (min >= max)
		return (0);
	size = max - min;
	i = 0;
	range = (int *)(malloc(sizeof(int) * size));
	if (range == NULL)
		return (0);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
