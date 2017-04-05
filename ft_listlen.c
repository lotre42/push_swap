/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 10:50:30 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 10:52:32 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_listlen(t_element *pilea)
{
	t_element *pile;
	int		i;

	i = 0;
	pile = pilea;
	while (pile)
	{
		pile = pile->next;
		i++;
	}
	return (i);
}
