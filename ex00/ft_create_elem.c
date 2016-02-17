/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 07:34:22 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/16 07:52:58 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list		*ft_create_elem(void *data)
{
	t_list		*list;

	list = (t_list)malloc(sizeof(list));
	list->list = NULL;
	list->data = data;
	return (list);
}
