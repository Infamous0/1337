/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:59:38 by amouhoub          #+#    #+#             */
/*   Updated: 2022/06/18 16:06:54 by amouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int	*a, int *b)

{
	int	div;
	int	mod;

		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
}