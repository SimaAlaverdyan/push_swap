/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:49:37 by salaverd          #+#    #+#             */
/*   Updated: 2021/06/03 12:27:16 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int is_all_digit(char **av)
{
    int i;

    i = 1;
    while (av[i])
    {
        if (ft_isdigit(*av[i]) != 1)
            return (0);
        i++;
    }
    return (1);
}

int ft_strcmp(const char *s1, const char *s2)
{
    while (*s1 == *s2++)
        if (*s1++ == 0)
            return (0);
    return (*(unsigned char *)s1 - *(unsigned char *)--s2);
}

int isdub(char **av, char *c, int i)
{
    int j;

    j = 1;
    while (j < i)
    {
        if (ft_strcmp(av[j], c) == 0)
            return (1);
        j++;
    }
    return (0);
}

int isDublicate(char **av)
{
    int i;
    i = 1;

    while (av[i] != NULL)
    {
        if (isdub(av, av[i], i) == 1)
            return (0);
        i++;
    }
    return (1);
}