/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 13:27:17 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/17 13:36:17 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		index;
	t_list				*temp;

	index = 0;
	if (being_list == NULL)
		return (0);
	while (index != nbr)
	{
		if (temp->next == NULL)
			return (0);
		temp = temp->next;
		index++;
	}
	return (temp);
}
