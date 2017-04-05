/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmpnext.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 11:03:02 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/05 13:45:06 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_cmpnext(t_element *midsup, t_element *midinf, t_element *pile)
{
	int			i;
	int			j;
	int			x;
	int			z;

	i = ft_distance(midsup->nb, pile);
	j = ft_distance(midsup->next->nb, pile);
	x = ft_distance(midinf->nb, pile);
	z = ft_distance(midinf->next->nb, pile);
	if ((i - j) > 12 && (j + 12) < x && (j + 12) < z)
		return (1);
	else if ((x - z) > 12 && (z + 12) < j && (z + 12) < i)
			return (2);
	return (0);
}

