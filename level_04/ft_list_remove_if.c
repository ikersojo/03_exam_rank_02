/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:44:55 by isojo-go          #+#    #+#             */
/*   Updated: 2022/10/02 09:03:42 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Assignment name  : ft_list_remove_if
	Expected files   : ft_list_remove_if.c
	Allowed functions: free
	---------------------------------------------------------------------------
	Write a function called ft_list_remove_if that removes from the passed list
	any element the data of which is "equal" to the reference data.
	It will be declared as follows :
		void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

	cmp takes two void* and returns 0 when both parameters are equal.

	You have to use the ft_list.h file, which will contain:
		typedef struct		s_list
		{
			struct s_list	*next;
			void			*data;
		}					t_list;

*/