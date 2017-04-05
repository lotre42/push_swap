/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 19:04:25 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/01 18:18:32 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_instruction(char *instr, t_element **pilea, t_element **pileb)
{
	if (!ft_strcmp("sa", instr))
		return (ft_sa(pilea));
	if (!ft_strcmp("sb", instr))
		return (ft_sa(pileb));
	if (!ft_strcmp("ss", instr))
		return (ft_ss(pilea, pileb));
	if (!ft_strcmp("pa", instr))
		return (ft_pa(pileb, pilea));
	if (!ft_strcmp("pb", instr))
		return (ft_pb(pilea, pileb));
	if (!ft_strcmp("ra", instr))
		return (ft_ra(pilea));
	if (!ft_strcmp("rb", instr))
		return (ft_rb(pileb));
	if (!ft_strcmp("rr", instr))
		return (ft_rr(pilea, pileb));
	if (!ft_strcmp("rra", instr))
		return (ft_rra(pilea));
	if (!ft_strcmp("rrb", instr))
		return (ft_rrb(pileb));
	if (!ft_strcmp("rrr", instr))
		return (ft_rrr(pilea, pileb));
	return (0);
}
