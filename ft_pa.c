/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 14:18:41 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 13:00:51 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_pa(t_element **pileb, t_element **pilea, int *c)
{
	t_element	*pile;
	int			i;
	int			nb;

	i = 0;
	*c = *c + 1;
	//ft_putstr("pa\n");
	pile = *pileb;
	while (pile)
	{
		pile = pile->next;
		i++;
	}
	free(pile);
	if (i < 1)
		return (0);
	nb = ft_cutpil(pileb);
	ft_add(nb, pilea);
	return (1);
}
