/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 15:47:20 by jrosamon          #+#    #+#             */
/*   Updated: 2015/11/17 17:53:57 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_list
{
	int				id;
	char			*name;
	void			*data;
	struct	s_list	*next;
}					t_list;

//LIT
t_list				*ft_lstnew(int id, char *name);
void				ft_addfront(t_list *head, char *name, int id);
void				ft_addback(t_list *head, char *name, int id);
void				ft_put_list_in_list(t_list *dst, t_list *src);
void				ft_printname(t_list *head);
void				ft_orderlistbyalph(t_list *head, char*(*pf)(char*str));
void				ft_putid(t_list *head);

//CHORDS
t_list				*init_lst_chord(int id, char *name);
t_list				*ft_create_n_chords(int n);
void				ft_add_chords_in_lst(t_list *hc, int n);
void				ft_add_note_in_chord(t_list *hc, t_list *hn);
void				ft_create_note_list(t_list *hc);
void				ft_print_chords(t_list *hc);

//FT
void				ft_bzero(char *s);
int					ft_strlen(char *s);
char				*ft_strdup(char *dest, char *src);
char				*ft_strnew(int size);
int					ft_nbdiv(int n);
char				*ft_itoa(int n);

//ALGO
char				*ft_orderbyalph(char *s);
#endif
