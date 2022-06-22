/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 01:50:11 by amouhoub          #+#    #+#             */
/*   Updated: 2022/06/20 15:29:21 by amouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
			i++;
		}
	}
	return (str);
}
