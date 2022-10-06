/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:42:03 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/06 16:54:31 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(int argc, char **argv)
{
	char	*str;
	int		n1;
	int		n2;

	if (argc == 2)
	{
		str = *(argv + 1);
		n1 = ft_atoi(str);
		n2 = atoi(str);
		printf("ft_atoi: %d\n c_atoi: %d\n", n1, n2);
	}
	return (0);
}
