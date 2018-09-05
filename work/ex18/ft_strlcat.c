/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 17:45:18 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/08/27 20:15:15 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dests;
	unsigned int srcs;

	dests = 0;
	srcs = 0;
	while (dest[dests] != '\0' && dests < size)
		dests++;
	while (src[srcs])
	{
		if (srcs + dests + 1 < size)
			dest[dests + srcs] = src[srcs];
		srcs++;
	}
	dest[dests + srcs] = '\0';
	return (dests + srcs);
}
