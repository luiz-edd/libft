/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:37:16 by leduard2          #+#    #+#             */
/*   Updated: 2023/07/25 14:57:28 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*usrc;
	char	*udest;

	i = 0;
	usrc = (char *)src;
	udest = (char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		udest[i] = usrc[i];
		i++;
	}
	return (udest);
}
