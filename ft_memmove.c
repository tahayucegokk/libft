/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:23:09 by muyucego          #+#    #+#             */
/*   Updated: 2023/10/10 18:53:33 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len;
	if (dst == NULL && src == NULL)
		return (0);
	if (dst == src)
		return (dst);
	else if (dst > src)
	{
		while (i-- > 0)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
