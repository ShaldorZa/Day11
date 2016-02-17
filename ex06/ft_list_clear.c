/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 12:51:34 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/17 13:22:06 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list		*temp;
	if (begin_list == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = *being_list;
		*begin_list = *begin_list->next;
		free(temp);
	}
}
