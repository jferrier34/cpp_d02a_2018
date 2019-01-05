/*
** EPITECH PROJECT, 2019
** exercice_two.c
** File description:
** exercice_two.c
*/

#include "simple_list.h"

bool_t list_add_elem_at_position(list_t *front_ptr, double elem,
unsigned int position)
{
    node_t *value;
    node_t *end_of_list = malloc(sizeof(node_t) + 1);

    if (position == 0) {
        list_add_elem_at_front(front_ptr, elem);
    }
    if (end_of_list == NULL) {
        return (FALSE);
    }
    while (position) {
        end_of_list = end_of_list->next;
    }
    value->next = end_of_list->next;
    end_of_list->next = value;
    return (TRUE);
}

bool_t list_del_elem_at_front(list_t *front_ptr)
{
    if (!front_ptr || *front_ptr == NULL)
        return (FALSE);
    node_t *tmp = *front_ptr;
    node_t *dump = *front_ptr;
    *front_ptr = tmp->next;
    free(dump);
    return (TRUE);
}

bool_t list_del_elem_at_back(list_t *front_ptr)
{
    if (!front_ptr || *front_ptr == NULL)
        return (FALSE);
    node_t *element = *front_ptr;
    if (element->next == NULL){
        *front_ptr = NULL;
        return (TRUE);
    }
    for (; element->next->next; element = element->next);
    node_t *dump = element->next;
    element->next = NULL;
    free(dump);
    return (TRUE);
}

bool_t list_del_elem_at_position(list_t *front_ptr, unsigned int position)
{
    list_t element;
    unsigned int i = 0;

    if (*front_ptr == NULL) {
        return (FALSE);
        element = *front_ptr;
    }
    if (element->next == NULL) {
        free(element->next);
        element->next = NULL;
        return (1);
    }
    while (element->next->next != NULL && i + 1 < position) {
        i++;
        element = element->next;
        free(element->next);
        return (1);
    }
}


unsigned int list_get_elem_at_front(list_t list)
{
    if (list == NULL)
        return (0);
    return (list->value);
}
