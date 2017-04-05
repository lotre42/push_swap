/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmppile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 09:55:45 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/01 19:05:00 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_cpypileintab(t_element *pilea)
{
	int			i;
	t_element	*compt;
	int			*tab;
	int			j;
	int			ret;

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
	ret = ft_cmppile(tab, i);
	free(tab);
	return (ret);
}
