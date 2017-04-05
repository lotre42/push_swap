/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:09:03 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/05 14:41:45 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

static int	pushswap2(t_element **pilea, int n)
{
	t_element	*pileb;
	int			c;

	c = 0;
	pileb = NULL;
	if (!ft_double(*pilea))
	{
		ft_putendl("Error");
		return (0);
	}
	(void)n;
	//ft_cmpforalg(ft_buble(*pilea), *pilea, n, &pileb);
	ft_algsimple(pilea, &pileb , &c);
	return (0);
}

int			pushswap(int argc, char **argv)
{
	int			i;
	t_element	*pilea;
	size_t		j;
//	char **tab;

	pilea = NULL;
	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			if (((argv[i][j] < '0' || argv[i][j] > '9') && j > 0) ||
				((argv[i][0] < '0' || argv[i][0] > '9') && argv[i][0] != '-'))
			{
				ft_putendl("Error");
				return (0);
			}
			j++;
		}
		if (ft_atoi(argv[i]) > 2147483647 || ft_atoi(argv[i]) < -2147483648)
		{
			ft_putendl("Error");
			return (0);
		}
		ft_add(ft_atoi(argv[i]), &pilea);
		i--;
	}
/*	tab = ft_strsplit(argv[i], ' ');
	i = 0;
	while (tab[i])
	{
		ft_add(ft_atoi(tab[i]), &pilea);
		i++;
	}
	ft_putnbr(i);
	return (0);*/
		return (pushswap2(&pilea, (argc - 1)));
}
