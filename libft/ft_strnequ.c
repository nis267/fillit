/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnequ.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 21:24:13 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 21:26:17 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((!s1 && s2) || (s1 && !s2))
		return (0);
	if (!s1 && !s2)
		return (1);
	return (ft_strncmp(s1, s2, n) ? 0 : 1);
}
