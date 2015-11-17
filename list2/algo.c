/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 17:49:57 by jrosamon          #+#    #+#             */
/*   Updated: 2015/11/17 14:23:29 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

char		*ft_orderbyalph(char *s)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (s[i] > s[j])
			{
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (s);
}

