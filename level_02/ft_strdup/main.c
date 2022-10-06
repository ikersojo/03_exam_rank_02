/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:27:08 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/06 17:34:31 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;

	if (argc == 2)
	{
		s1 = ft_strdup(*(argv + 1));
		s2 = strdup(*(argv + 1));
		printf("ft_strcmp: %s\n c_strcmp: %s\n", s1, s2);
		free(s1);
		free(s2);
	}
	return (0);
}
