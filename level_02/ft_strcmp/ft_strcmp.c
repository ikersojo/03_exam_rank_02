/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:54:27 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/06 16:54:48 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ft_strcmp
	Expected files   : ft_strcmp.c
	Allowed functions:
	---------------------------------------------------------------------------
	Reproduce the behavior of the function strcmp (man strcmp).

	Your function must be declared as follows:
		int		ft_strcmp(char *s1, char *s2);
*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
