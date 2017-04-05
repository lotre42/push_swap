/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 15:48:39 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/01 19:50:25 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_addend(int c, t_element **add)
{
	t_element *new;
	t_element *tmp;

	if (!(new = malloc(sizeof(t_element))))
		return (0);
	new->nb = c;
	new->next = NULL;
	tmp = *add;
	if (*add == NULL)
		*add = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (0);
}
