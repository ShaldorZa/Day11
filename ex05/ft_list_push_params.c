/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 10:13:19 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/16 11:18:23 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_push_params(int size, char **args)
{
	int			index;
	t_list		*temp;
	t_list		*elem;
	t_list		*first;

	index = size;
	while (index != 0)
	{
		elem = ft_create_elem(args[i]);
		if (index == size)
			first = elem;
		if (index != 1)
			elem->next = temp;
		temp = elem;
		index--
	}
	return (first);
}
