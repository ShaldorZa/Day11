/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 08:20:33 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/16 08:43:26 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	int			index;
	t_list		*temp;

	if (begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		temp = *begin_list;
		while (temp->next != NULL)
			temp = temp->next;
		temp-> = ft_create_elem(data);
	}
}
