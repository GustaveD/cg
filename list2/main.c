/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 15:49:49 by jrosamon          #+#    #+#             */
/*   Updated: 2015/11/17 17:54:18 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

int		main(int ac, char **av)
{
	t_list	*headnote;
	t_list	*headchord;
	int		i;
	char	*(*ptrfct)(char*);

	ptrfct = ft_orderbyalph;
	headnote = NULL;
	headchord = NULL;
	headnote = ft_lstnew(0, "had;fskdfjdssdkf;");
	i = 1;
	while (ac > 1)
	{
		ft_addfront(headnote, av[ac - 1], i);
		ac--;
		printf("i = %d\n", i);
		i++;
	}
	ft_putid(headnote);
	ft_printname(headnote);
	printf("---------\n");
	headchord = ft_create_n_chords(3);
	ft_add_note_in_chord(headchord, headnote);
	ft_print_chords(headchord);

	return (0);
}
