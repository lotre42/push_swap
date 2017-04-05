/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algsimple.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 20:20:28 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/05 14:42:35 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

static void		ft_middle(t_element **pilea, int nb, int *c, t_element **pileb)
{
	t_element *tmp;
	t_element *cppileb;

	tmp = *pilea;
	if (ft_nbinlist(nb, *pilea))
	{
		while (tmp->nb != nb)
			ft_rra(&tmp, c);
		ft_pb(&tmp, pileb, c);
		*pilea = tmp;
	}
	else
	{
		while (tmp->nb != nb)
			ft_ra(&tmp, c);
		ft_pb(&tmp, pileb, c);
		*pilea = tmp;
	}
	cppileb = *pileb;
	if (cppileb->next)
	{
		if (cppileb->nb < cppileb->next->nb)
			ft_rb(pileb, c);
	}
}

static	int		ft_serarchfirst(t_element **pilea, t_element **pileb,
				t_element **midsup, t_element **midinf)
{
	int			i;
	t_element	*cpmidsup;
	t_element	*cpmidinf;

	cpmidsup = *midsup;
	cpmidinf = *midinf;
	i = 0;
	while (cpmidsup && cpmidinf)
	{
		if (ft_distance(cpmidsup->nb, *pilea) <=
				ft_distance(cpmidinf->nb, *pilea))
		{
			ft_middle(pilea, cpmidsup->nb, &i, pileb);
			cpmidsup = cpmidsup->next;
		}
		else
		{
			ft_middle(pilea, cpmidinf->nb, &i, pileb);
			cpmidinf = cpmidinf->next;
		}
	}
	*midsup = cpmidsup;
	*midinf = cpmidinf;
	return (i);
}

int				ft_algsimple(t_element **pilea, t_element **pileb, int *c)
{
	t_element	*piletri;
	t_element	*midsup;
	t_element	*midinf;

	piletri = ft_buble(*pilea);
	midsup = ft_cppiletriend(piletri, ft_searchpivot(piletri));
	midinf = ft_cppiletri(piletri, ft_searchpivot(piletri));
	*c = *c + ft_serarchfirst(pilea, pileb, &midsup, &midinf);
	if (!midsup)
	{
		while (midinf)
		{
			ft_middle(pilea, midinf->nb, c, pileb);
			midinf = midinf->next;
		}
	}
	else if (!midinf)
	{
		while (midsup)
		{
			ft_middle(pilea, midsup->nb, c, pileb);
			midsup = midsup->next;
		}
	}
	while (*pileb)
		ft_pa(pileb, pilea, c);
	ft_displaypile(*pilea);
	ft_putnbr(*c);
	return (0);
}
