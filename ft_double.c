/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:18:56 by kahantar          #+#    #+#             */
/*   Updated: 2017/03/30 15:55:20 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_double(t_element *pilea)
{
	int			i;
	t_element	*compt;
	int			*tab;
	int			j;

	if (pilea == NULL)
		return (0);
	i = 1;
	compt = pilea;
	while (compt->next)
	{
		compt = compt->next;
		i++;
	}
	tab = malloc(sizeof(int) * i);
	j = 1;
	tab[0] = pilea->nb;
	while (j < i)
	{
		pilea = pilea->next;
		tab[j] = pilea->nb;
		j++;
	}
	return (ft_cpile(tab, i));
}
