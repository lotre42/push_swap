/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:52:07 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/05 14:42:05 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/includes/libft.h"

typedef struct			s_element
{
	int					nb;
	struct s_element	*next;
}						t_element;

void					ft_displaypile(t_element *element);
int						pushswap(int argc, char **argv);
int						ft_add(int c, t_element **add);
int						ft_sa(t_element **pile, int *c);
int						ft_ss(t_element **pilea, t_element **pileb, int *c);
int						ft_ra(t_element **pilea, int *c);
int						ft_rra(t_element **pilea, int *c);
int						ft_rrb(t_element **pileb, int *c);
int						ft_rrr(t_element **pilea, t_element **pileb, int *c);
int						ft_rr(t_element **pilea, t_element **pileb, int *c);
int						ft_rb(t_element **pileb, int *c);
int						ft_pb(t_element **pilea, t_element **pileb, int *c);
int						ft_pa(t_element **pileb, t_element **pilea, int *c);
int						ft_cutpil(t_element **pile);
int						ft_addend(int c, t_element **add);
int						ft_cpypileintab(t_element *pilea);
int						ft_cmppile(int *tab, int i);
int						ft_cpile(int *tab, int i);
int						ft_double(t_element *pilea);
t_element				*ft_buble(t_element *pilea);
t_element				*ft_cmpforalg(t_element *piletri,
						t_element *pileai, int n, t_element **pileb);
int						ft_algsup(t_element **pilea, t_element *piletri,
						int *c);
void					ft_alginf(t_element **pilea, t_element *piletri,
						t_element **pileb, int *c);
t_element				*ft_cpypile(t_element *pilea);
int						ft_searchnb(int nb, t_element *pile);
int						ft_placement(t_element *pilea, t_element *piletri);
int						ft_listlen(t_element *pilea);
int						ft_pushsup(t_element **pilea, int nb, int *c);
int						ft_pivot(t_element **pilea, t_element **pileb,
						t_element *piletri, int *c);
int						ft_searchend(t_element *piletri);
int						ft_searchpivot(t_element *piletri);
t_element				*ft_cppiletri(t_element *piletri, int nb);
t_element				*ft_cppiletriend(t_element *piletri, int nb);
int						ft_algsimple(t_element **pileb, t_element **pilea, int *c);
t_element				*ft_reversebuble(t_element *pilea);
int						ft_nbinlist(int nb, t_element *pile);
int						ft_distance(int nb, t_element *pilea);
int						ft_cmpnext(t_element *midsup, t_element *midinf,
						t_element *pile);


#endif
