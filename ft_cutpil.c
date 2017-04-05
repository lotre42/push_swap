/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cutpil.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 12:21:55 by kahantar          #+#    #+#             */
/*   Updated: 2017/03/30 15:58:02 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_cutpil(t_element **pile)
{
	int			nb;
	t_element	*pilecut;

	pilecut = *pile;
	nb = pilecut->nb;
	*pile = pilecut->next;
	free(pilecut);
	return (nb);
}
