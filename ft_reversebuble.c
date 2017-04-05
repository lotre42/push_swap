/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reversebuble.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 21:14:36 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 21:16:13 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

t_element		*ft_reversebuble(t_element *pilea)
{
	t_element	*piletri;
	t_element	*tmp;
	int			swap;
	int			i;
 
	i = 1;
	tmp = ft_cpypile(pilea);
	while (i != 0)
	{
		piletri = tmp;
		i = 0;
		while (piletri->next)
		{
			if (piletri->nb < piletri->next->nb)
			{
				i++;
				swap = piletri->nb;
				piletri->nb = piletri->next->nb;
				piletri->next->nb = swap;
			}
			piletri = piletri->next;
		}
	}
	piletri = tmp;
	return (piletri);
}
