/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarnjan <okarnjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:53:02 by okarnjan          #+#    #+#             */
/*   Updated: 2022/09/03 13:25:22 by okarnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	c;
	char	*d;

	d = (char *)dst;
	//s = (char *)src;
	c = 0;
	while (dstsize && (src[c] != '\0'))
	{
		d[c] = src[c];
		dstsize--;
		c++;
	}
	d[c] = '\0';
	return (ft_strlen(src));
}
