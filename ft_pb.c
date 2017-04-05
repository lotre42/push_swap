/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 14:20:35 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 13:00:46 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_pb(t_element **pilea, t_element **pileb, int *c)
{
	t_element	*pile;
	int			i;
	int			nb;

	i = 0;
	*c = *c + 1;
	pile = *pilea;
	//ft_putstr("pb\n");
	while (pile)
	{
		pile = pile->next;
		i++;
	}
	free(pile);
	if (i < 1)
		return (0);
	nb = ft_cutpil(pilea);
	ft_add(nb, pileb);
	return (1);
}
