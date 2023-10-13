/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:36:56 by muyucego          #+#    #+#             */
/*   Updated: 2023/10/13 17:56:37 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	i = -1;
	if (s1 == NULL)
		return (NULL);
	dest = (char *)malloc(ft_strlen(s1));
	if (dest == NULL)
		return (NULL);
	while (s1[i])
		dest[i] = s1[i];
	dest[i] = '\0';
	return (dest);
}
