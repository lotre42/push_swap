/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:22:58 by kahantar          #+#    #+#             */
/*   Updated: 2017/03/30 15:57:46 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_cpile(int *tab, int i)
{
	int j;
	int x;

	j = 0;
	while (j < i)
	{
		x = j + 1;
		while (x < i)
		{
			if (tab[j] == tab[x])
				return (0);
			x++;
		}
		j++;
	}
	return (1);
}
