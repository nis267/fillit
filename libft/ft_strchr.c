/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 21:21:38 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 21:25:57 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	chr;
	size_t	size;

	i = -1;
	chr = c;
	size = ft_strlen(s);
	while (++i <= size)
		if (s[i] == chr)
			return (&((char*)s)[i]);
	return (NULL);
}
