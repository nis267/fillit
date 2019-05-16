/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_newtetri.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/01 22:13:32 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/07 15:20:02 by dewalter    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		*ft_newtetri(void)
{
	t_tetri	*nouveau;
	int		i;

	i = 0;
	if (!(nouveau = (t_tetri *)malloc(sizeof(t_tetri))))
		return (NULL);
	nouveau->next = NULL;
	return (nouveau);
}
