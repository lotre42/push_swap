/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 10:59:55 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 13:00:04 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_sa(t_element **pile, int *c)
{
	t_element	*pilea;
	int			nb1;
	int			nb2;
	int			i;

	i = 0;
	*c = *c + 1;
	//if (*c > 0)
	//	ft_putstr("sa\n");
	pilea = *pile;
	while (pilea)
	{
		pilea = pilea->next;
		i++;
	}
	free(pilea);
	if (i < 2)
		return (0);
	nb1 = ft_cutpil(pile);
	nb2 = ft_cutpil(pile);
	ft_add(nb1, pile);
	ft_add(nb2, pile);
	return (1);
}
