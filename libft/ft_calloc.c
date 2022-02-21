/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhatsago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:03:51 by zhatsago          #+#    #+#             */
/*   Updated: 2021/02/01 17:15:47 by zhatsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *n;

	if (!(n = malloc(count * size)))
		return (NULL);
	ft_memset(n, 0, count * size);
	return (n);
}
