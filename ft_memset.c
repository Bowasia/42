/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarnjan <okarnjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:02:03 by okarnjan          #+#    #+#             */
/*   Updated: 2022/09/02 00:19:12 by okarnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ans;

	ans = (unsigned char *)b;
	while (len)
	{
		*ans = c;
		ans++;
		len--;
	}
	return (b);
}
