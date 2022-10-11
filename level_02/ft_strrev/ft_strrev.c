/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:55:02 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/06 20:21:00 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ft_strrev
	Expected files   : ft_strrev.c
	Allowed functions:
	---------------------------------------------------------------------------
	Write a function that reverses (in-place) a string.
	It must return its parameter.

	Your function must be declared as follows:
	char	*ft_strrev(char *str);
*/

void	ft_charswap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 0;
	while (i < (len / 2))
	{
		ft_charswap((str + i), (str + (len - 1) - i));
		i++;
	}
	return (str);
}
