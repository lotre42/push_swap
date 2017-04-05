/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 10:56:38 by kahantar          #+#    #+#             */
/*   Updated: 2017/03/30 15:58:14 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_add(int c, t_element **add)
{
	t_element *new;

	if (!(new = malloc(sizeof(t_element))))
		return (0);
	new->nb = c;
	new->next = *add;
	*add = new;
	return (0);
}
