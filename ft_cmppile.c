/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmppile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 11:24:53 by kahantar          #+#    #+#             */
/*   Updated: 2017/03/30 11:50:54 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_cmppile(int *tab, int i)
{
	int j;
	int x;

	j = 0;
	while (j < i)
	{
		x = j + 1;
		while (x < i)
		{
			if (tab[j] > tab[x])
				return (0);
			x++;
		}
		j++;
	}
	return (1);
}
