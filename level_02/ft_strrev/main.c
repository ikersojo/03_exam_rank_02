/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:11:37 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/06 20:13:32 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strrev(char *str);

int	main(int argc, char **argv)
{
	char	*s1;

	if (argc == 2)
	{
		s1 = ft_strrev(*(argv + 1));
		printf("ft_strrev: %s\n", s1);
	}
	return (0);
}
