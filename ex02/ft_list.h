/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 07:42:27 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/16 08:47:08 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ft_list_h__
#define	ft_list_h__

typedef struct s_list t_list;

struct s_list {
	t_list		*next;
	void		*data;
};
t_list		*ft_create_elem(void *data);

#endif
