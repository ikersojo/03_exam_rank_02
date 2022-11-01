/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:36:10 by isojo-go          #+#    #+#             */
/*   Updated: 2022/11/01 20:34:28 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ft_itoa
	Expected files   : ft_itoa.c
	Allowed functions: malloc
	---------------------------------------------------------------------------
	Write a function that takes an int and converts it to a null-terminated
	string. The function returns the result in a char array that you must
	allocate.

	Your function must be declared as follows:
		char	*ft_itoa(int nbr);
*/

#include <stdlib.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (*(src + i))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}

char	*case_minint(void)
{
	char	*str;

	str = (char *)malloc(12);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, "-2147483648");
	return (str);
}

char	ft_digitcount(int n)
{
	char	count;
	char	sign;

	count = 0;
	sign = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		sign = 1;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (sign + count);
}

char	*ft_itoa(int nbr)
{
	char	digits;
	char	*str;

	if (nbr == -2147483648)
		return (case_minint());
	digits = ft_digitcount(nbr);
	str = (char *)malloc(sizeof(char) * (digits));
	if (str == NULL)
		return (NULL);
	digits--;
	while (digits > 0)
	{
		*(str + digits) = (nbr % 10) + '0';
		nbr = nbr / 10;
		digits--;
	}
	if (nbr < 0)
		*str = '-';
	return (str);
}
