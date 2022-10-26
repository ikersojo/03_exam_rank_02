/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:54:36 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/26 21:07:42 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ft_strcspn
	Expected files   : ft_strcspn.c
	Allowed functions:
	---------------------------------------------------------------------------
	Reproduce the behavior of the function strcspn (man strcspn).

	Your function must be declared as follows:
		size_t	ft_strcspn(const char *s, const char *reject);
*/

#include <string.h>

int	ft_ischarset(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (*((char *)s + i))
	{
		if (!ft_ischarset(*((char *)s + i), (char *)reject))
			i++;
		else
			break ;
	}
	return (i);
}
