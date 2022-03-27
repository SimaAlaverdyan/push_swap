/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:53:29 by zhatsago          #+#    #+#             */
/*   Updated: 2021/02/02 17:12:19 by zhatsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../include/push_swap.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		dig;
	long	res;
    int     i;

    i = 0;
	sign = 1;
	dig = 0;
	res = 0;

	while (*str == '\n' || *str == '\t' || *str == '\v'
		|| *str == ' ' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
        sign = -1;
	if (*str == '-' || *str == '+')
        str++;
    if (!(*str >= '0' && *str <= '9'))
        error();
    while (*str == '0')
        str++;
    while ((*str >= '0') && (*str <= '9'))
    {
        res = res * 10 + (*str - '0');
        dig++;
        if (dig > 10 || (res * sign) > INT_MAX || (res * sign) < INT_MIN)
            error();
        str++;
	}

    return (int)(res * sign);
}

// long    ft_atoi_2(const char *str)
// {
//     long            res;
//     long            sign;
//     unsigned int    i;

//     res = 0;
//     sign = 1;
//     i = 0;
//     while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || \
// str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
//         i++;
//     if (str[i] == '-' | str[i] == '+')
//     {
//         if (str[i] == '-')
//             sign = -1;
//         i++;
//     }
//     while (str[i] >= '\0' && str[i] <= '9')
//     {
//         res = res * 10 + str[i] - '0';
//         i++;
//     }
//     return (res * sign);
// }