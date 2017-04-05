/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisplay.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 10:54:21 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/01 16:55:47 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

void	ft_displaypile(t_element *element)
{
	t_element *tmp;

	if (element)
	{
		tmp = element;
		while (tmp)
		{
			ft_putnbr(tmp->nb);
			ft_putchar('\n');
			tmp = tmp->next;
		}
		free(tmp);
	}
}
