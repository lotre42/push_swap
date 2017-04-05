/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchpivot.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 13:09:38 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 13:13:13 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_searchpivot(t_element *piletri)
{
	t_element	*tmp;
	int			n;
	int			i;

	tmp = piletri;
	i = 0;
	n = ft_listlen(tmp);
	while (i < (n / 2))
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->nb);
}
