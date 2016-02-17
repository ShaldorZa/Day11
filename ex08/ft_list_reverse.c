/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 13:39:43 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/17 14:10:10 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list		*next;
	t_list		*current;

	current = *begin_list;
	while (current != NULL)
	{
		next = current->next;
		current->next = *begin_list;
		*begin_list = current;
		current = next;
	}
}
