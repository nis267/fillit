/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strequ.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 21:22:11 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 21:26:04 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if ((!s1 && s2) || (s1 && !s2))
		return (0);
	if (!s1 && !s2)
		return (1);
	return (ft_strcmp(s1, s2) ? 0 : 1);
}