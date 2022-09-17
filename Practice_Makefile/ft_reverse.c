/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:16:12 by okarnjan          #+#    #+#             */
/*   Updated: 2022/09/16 21:43:24 by okarnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *src);

char	*ft_reverse(char *src, char *dst)
{
	char	*d;
	int	i;

	i = ft_strlen(src);
	d = dst;
	while (i)
	{
		*d = src[i - 1];
		printf("%c", *d);
		d++;
		i--;
	}
	*d = '\0';
	return (dst);
}

int	main(void)
{
	char	s[] = "Hello";
	char	*str;

	printf("%s",ft_reverse(s, str));
	return (0);
}
