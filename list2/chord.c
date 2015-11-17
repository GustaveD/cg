/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chord.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 16:28:13 by jrosamon          #+#    #+#             */
/*   Updated: 2015/11/17 17:56:31 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	ft_add_chords_in_lst(t_list *hc, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_addback(hc, ft_itoa(i + 1), i + 1);
		i++;
	}
}

void	ft_add_note_in_chord(t_list *hc, t_list *hn)
{
	t_list *tmp;

	tmp = hc->next;
	while (tmp)
	{
		ft_put_list_in_list(tmp, hn);
		tmp = tmp->next;
	}
}

void	ft_create_note_list(t_list *hc)
{
	t_list	*tmp;
	t_list	*note_in_chords;

	tmp = hc->next;
	while (tmp)
	{
		printf("listenote\n");
		note_in_chords = ft_lstnew(0, "headlist_note_in_chord");
		hc->data = (t_list*)note_in_chords;
		tmp = tmp->next;
		free(note_in_chords);
	}
}

t_list	*ft_create_n_chords(int n)
{
	t_list	*head_chord;

	head_chord = init_lst_chord(0, "chords_head");
	ft_add_chords_in_lst(head_chord, n);
	ft_create_note_list(head_chord);
	return (head_chord);
}

void	ft_print_chords(t_list *hc)
{
	t_list	*tmp;

	tmp = hc->next;
	while (tmp)
	{
		printf("element n%d = %s\n", tmp->id, tmp->name);
		ft_printname((t_list*)tmp->data);
		tmp = tmp->next;
	}
}

