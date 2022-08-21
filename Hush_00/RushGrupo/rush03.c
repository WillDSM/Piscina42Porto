/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkostenk <mkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:52:50 by mkostenk          #+#    #+#             */
/*   Updated: 2022/08/21 14:19:29 by mkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
char	define_symbol(int c, int l, int col, int line);

void	rush(int col, int line)
{
	int		c;
	int		l;
	char	ch;

	l = 1;
	while (l <= line)
	{
		c = 1;
		while (c <= col)
		{
			ch = define_symbol(c, l, col, line);
			ft_putchar(ch);
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}

char	define_symbol(int c, int l, int col, int line)
{
	int	is_corner;
	int	border_line;
	int	border_col;

	if (!(c == 1 || c == col) && !(l == 1 || l == line))
		return (' ');
	else
	{
		border_line = (l == 1 || l == line);
		border_col = (c == 1 || c == col);
		is_corner = (border_line && border_col);
		if ((border_line && !is_corner) || (border_col && !is_corner))
			return ('B');
		else if (c == 1 && (l == 1 || l == line))
			return ('A');
		else if (c == col && (l == 1 || l == line))
			return ('C');
	}
}
