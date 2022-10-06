/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:42:03 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/06 17:03:58 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		n1;
	int		n2;

	if (argc == 3)
	{
		s1 = *(argv + 1);
		s2 = *(argv + 2);
		n1 = ft_strcmp(s1, s2);
		n2 = strcmp(s1, s2);
		printf("ft_strcmp: %d\n c_strcmp: %d\n", n1, n2);
	}
	return (0);
}
