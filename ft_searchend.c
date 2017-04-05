/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 13:09:06 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 13:20:54 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int			ft_searchend(t_element *piletri)
{
	t_element *tmp;

	tmp = piletri;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->nb);
}
