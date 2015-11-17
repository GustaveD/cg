/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 15:52:31 by jrosamon          #+#    #+#             */
/*   Updated: 2015/11/17 17:57:42 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

t_list		*ft_lstnew(int id, char *name)
{
	t_list *new;

	if(!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(new->name = (char*)malloc(sizeof(char) * ft_strlen(name) + 1)))
		return (NULL);
	if (!(new->data = (void*)malloc(sizeof(void))))
		return (NULL);

	new->id = id;
	ft_bzero(new->name);
	new->name = ft_strdup(new->name, name);
	new->next = NULL;

	return(new);
}

void		ft_addfront(t_list *head, char *name, int id)
{
	t_list	*new;
	t_list	*tmp;

	new = ft_lstnew(id, name);
	tmp = head->next;
	new->next = tmp;
	head->next = new;
}

void		ft_addback(t_list *head, char *name, int id)
{
	t_list	*new;
	t_list	*tmp;

	new = ft_lstnew(id, name);
	tmp = head;
	while (tmp->next)
		tmp = tmp->next;
	new->next = tmp->next;
	tmp->next = new;
}

t_list		*select_list(t_list *head, int id)
{
	t_list	*tmp;

	tmp = head->next;
	while (tmp)
	{
		if (tmp->id == id)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

void		ft_put_list_in_list(t_list *dst, t_list *src)
{
	t_list	*tmp;

	tmp = select_list(src, 1);
	ft_addback((t_list*)dst->data,tmp->name, 1);
	tmp = select_list(src, 4);
	ft_addback((t_list*)dst->data,tmp->name, 2);
	tmp = select_list(src, 7);
	ft_addback((t_list*)dst->data,tmp->name, 3);
}

void		ft_orderlistbyalph(t_list *head, char*(*pf)(char*))
{
	t_list *tmp;
	
	tmp = head->next;
	while (tmp)
	{
		pf(tmp->name);
		tmp = tmp->next;
	}
}


void		ft_putid(t_list *head)
{
	t_list *tmp;
	int i;

	tmp = head->next;
	i = 1;
	while (tmp)
	{
		tmp->id =i;
	  	i++;
  		tmp = tmp->next;	   
	}
}

void		ft_printname(t_list *head)
{
	t_list	*tmp;

	tmp = head->next;
	while (tmp)
	{
		printf("name of n%d = %s\n", tmp->id, tmp->name);
		tmp = tmp->next;
	}
}
