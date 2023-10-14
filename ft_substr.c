/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:33:46 by muyucego          #+#    #+#             */
/*   Updated: 2023/10/14 05:49:05 by muyucego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (start > ft_strlen(s) - 1)
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (cpy == NULL || !s)
		return (NULL);
	while (s[i])
	{
		if (j < len && i >= start)
		{
			cpy[j] = s[i];
			j++;
		}
		i++;
	}
	cpy[j] = '\0';
	return (cpy);
}
