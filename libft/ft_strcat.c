/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 21:21:29 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 21:25:56 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	size;

	size = ft_strlen(s1);
	i = -1;
	while (s2[++i])
		s1[size + i] = s2[i];
	s1[size + i] = '\0';
	return (s1);
}
