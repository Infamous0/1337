/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:04:33 by amouhoub          #+#    #+#             */
/*   Updated: 2022/06/12 04:01:20 by amouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_text(char a, char b, char c, bool last)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (!last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	bool	last;

	a = '0';
	{
		while (a <= '7')
		{
			b = a + 1;
			while (b <= '8')
			{	
				c = b + 1;
				while (c <= '9')
				{
					last = (a == '7' && b == '8' && c == '9');
					ft_print_text(a, b, c, last);
					c++;
				}
					b++;
			}
				a++;
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
