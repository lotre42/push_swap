/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbinlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 22:55:50 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 23:00:31 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_nbinlist(int nb, t_element *pile)
{
	t_element *tmp;
	int	i;

	i = 0;
	tmp = pile;
	while (tmp->nb != nb)
	{
		i++;
		tmp = tmp->next;
	}
	if (i > (ft_listlen(pile) / 2))
		return (1);
	else
		return (0);
}
