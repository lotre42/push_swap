/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushsup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 10:42:49 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 12:30:15 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_pushsup(t_element **pilea, int nb, int *c)
{
	int			i;
	t_element	*tmp;

	i = 0;
	tmp = *pilea;
	while (tmp->nb != nb)
	{
		ft_ra(&tmp, c);
		if (tmp->nb != nb)
			ft_sa(&tmp, c);
		i++;
	}
	while (i > 0)
	{
		ft_rra(&tmp, c);
		ft_sa(&tmp, c);
		i--;
	}
	ft_ra(&tmp, c);
	*pilea = tmp;
	return (1);
}

