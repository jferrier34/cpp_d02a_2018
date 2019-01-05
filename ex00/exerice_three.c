/*
** EPITECH PROJECT, 2019
** exercice_three.c
** File description:
** exerice_three.c
*/

#include "simple_list.h"

double list_get_elem_at_back(list_t list)
{
    if (list == NULL)
        return (0);
    while (list->next != NULL)
        list = list->next;
    return (list->value);
}

node_t *list_get_first_node_with_value(list_t list, double value)
{
    while (list) {
        if (list->value == value)
            return (list);
        list = list->next;
    }
    return (NULL);
}
