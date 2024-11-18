/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:08:46 by abnsila            #+#    #+#            */
/*   Updated: 2024/07/25 15:08:48 by abnsila           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int ft_any(char **tab, int(*f)(char*))
{
    int i;

    i = 0;
    while (tab[i])
    {
        if (f(tab[i]))
            return (1);
        i++;
    }
    return (0);
}