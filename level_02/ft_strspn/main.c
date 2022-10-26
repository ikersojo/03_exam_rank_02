/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:43:33 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/26 17:04:53 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept);

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	size_t	num1;
	size_t	num2;

	if (argc == 3)
	{
		s1 = *(argv + 1);
		s2 = *(argv + 2);
		num1 = ft_strspn(s1, s2);
		num2 = ft_strspn(s1, s2);
		printf("FT_STRSPN: %zu\n C_STRSPN: %zu\n", num1, num2);
	}
	return (0);
}
