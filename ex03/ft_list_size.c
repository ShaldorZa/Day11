/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 09:54:23 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/16 09:59:40 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list **begin_list)
{
	int			index;
	t_list		*temp;

	index = 0;
	temp = *begin_list;
	if (begin_list == NULL)
		return (0);
	while(temp->next != NULL)
	{
		temp = temp->next;
		index++;
	}
	return (index + 1);
}
