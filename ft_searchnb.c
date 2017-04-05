/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchnb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 16:38:17 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/03 18:54:53 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int			ft_searchnb(int nb, t_element *pile)
{
	int		i;

	i = 0;
	while (pile)
	{
		if (pile->nb == nb)
			i++;
		pile = pile->next;
	}
	if (i == 0)
		return (0);
	else
		return (1);
}
