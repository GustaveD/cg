/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 16:02:30 by jrosamon          #+#    #+#             */
/*   Updated: 2015/11/17 16:52:24 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[++i])
		;
	return (i);
}

void	ft_bzero(char *s)
{

	while (*s)
	{
		*s = 0;
		s++;
	}
}

char	*ft_strdup(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_nbdiv(int n)
{
	int cb;

	cb = 1;
	while (n > 9)
	{
		n /= 10;
		cb++;
	}
	return (cb);
}

char	*ft_strnew(int size)
{
	char	*ns;

	ns = (char*)malloc(sizeof(char) * size);
	if (!ns)
		return (NULL);
	else
		return (char*)(ns);
}

char	*ft_itoa(int n)
{
	char	*ns;

	ns = ft_strnew(ft_nbdiv(n));
	if (n >= 0 && ns)
	{
		*--ns = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--ns = '0' + (n % 10);
			n /= 10;
		}
	}
	else if (ns)
	{
		*--ns = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*-- ns = '0' - (n % 10);
			n /= 10;
		}
		*--ns = '-';
	}
	return (ns);
}
