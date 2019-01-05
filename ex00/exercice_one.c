/*
** EPITECH PROJECT, 2019
** exercice_one.c
** File description:
** exercice_one.c
*/

#include "simple_list.h"

unsigned int list_get_size(list_t list)
{
    unsigned int nb = 0;

    while (list) {
        list = list->next;
        nb = nb + 1;
    }
    return (nb);
}

bool_t list_is_empty(list_t list)
{
    if (list) {
        return (FALSE);
    } else
        return (TRUE);
}

void list_dump(list_t list)
{
    int check = 0;

    while (check == 0)
        if (list) {
            printf("%f", list->value);
            printf("\n");
            list = list->next;
        }
        else if (!list) {
            check = 1;
        }
}

bool_t list_add_elem_at_front(list_t *front_ptr, double elem)
{
    node_t *new = (node_t *)malloc(sizeof(node_t));

    if (!new) {
        return (FALSE);
    }
    new->value = elem;
    new->next = *front_ptr;
    *front_ptr = new;
    return (TRUE);
}

bool_t list_add_elem_at_back(list_t *front_ptr, double elem)
{
    if (!front_ptr)
        return (FALSE);
    node_t *n = (node_t *)malloc(sizeof(node_t));
    n->value = elem;
    n->next = NULL;
    if (*front_ptr == NULL){
        *front_ptr = n;
        goto END;
    }
    node_t *tmp = *front_ptr;
    for (; tmp->next; tmp = tmp->next);
    tmp->next = n;
    END:
    return (TRUE);
}

