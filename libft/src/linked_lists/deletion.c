/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deletion.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:45:49 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:45:49 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/linked_list_utils.h"

void delete_elem(l_elem_t *e, void(*del)(void *))
{
    if (e == NULL)
        return;
    (*del)(e->content);
    e->next = NULL;
    e->content = NULL;
}

void destroy_elem(l_elem_t *e, void(*del)(void *))
{
    delete_elem(e, del);
    free(e);
}

void list_delete(l_list_t *l)
{
    size_t i = 0;
    l_elem_t *current;

    if (l == NULL)
        return;
    while (i < l->len){
        current = l->first;
        l->first = l->first->next;
        destroy_elem(current, l->del);
        i ++;
    }
    l->len = 0;
    l->first = NULL;
    l->del = NULL;
}

l_list_t *list_destroy(l_list_t *l)
{
    list_delete(l);
    free(l);
    return (NULL);
}
