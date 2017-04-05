/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 03:14:06 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/05 04:07:48 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_distance(int nb, t_element *pilea)
{
	t_element *tmp;
	int			i;

	i = 0;
	tmp = pilea;
	while (tmp->nb != nb)
	{
		i++;
		tmp = tmp->next;
	}
	if (i <= (ft_listlen(pilea) / 2))
		return (i);
	else
		return (ft_listlen(pilea) - i);
}

