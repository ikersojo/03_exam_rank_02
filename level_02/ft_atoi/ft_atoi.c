/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:54:06 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/06 16:48:05 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ft_atoi
	Expected files   : ft_atoi.c
	Allowed functions: None
	---------------------------------------------------------------------------
	Write a function that converts the string argument str to an integer (type
	int) and returns it.
	It works much like the standard atoi(const char *str) function, see man.

	Your function must be declared as follows:
		int		ft_atoi(const char *str);
*/

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_isnum(*str))
		n = n * 10 + (*str++ - '0');
	return (n * sign);
}
