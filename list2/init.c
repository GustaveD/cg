/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 14:44:36 by jrosamon          #+#    #+#             */
/*   Updated: 2015/11/17 16:30:24 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

t_list	*init_lst_chord(int id, char *name)
{
	t_list *chords_lst;
	t_list *note_in_chords;

	chords_lst = ft_lstnew(id, name);
	note_in_chords = ft_lstnew(0, "head_note_in_chords");
	chords_lst->data = (t_list*)note_in_chords;
	return (chords_lst);
}

/*t_list	*init_notes_in_chord(t_list *headchord, t_list *headnote)
{
	
}*/
