/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:28:25 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 13:00:31 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_rb(t_element **pileb, int *c)
{
	int			nb;
	t_element	*tmp;

	tmp = *pileb;
//	if (*c > 0)
//		ft_putstr("rb\n");
	*c = *c + 1;
	if (tmp && tmp->next)
	{
		nb = ft_cutpil(pileb);
		ft_addend(nb, pileb);
	}
	return (1);
}
