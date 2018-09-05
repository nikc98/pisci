/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 18:32:26 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/08/28 14:05:30 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int srcs;

	srcs = 0;
	while (src[srcs] != '\0' && srcs + 1 < size)
	{
		dest[srcs] = src[srcs];
		srcs++;
	}
	dest[srcs] = '\0';
	srcs = 0;
	while (src[srcs])
		srcs++;
	return (srcs);
}
