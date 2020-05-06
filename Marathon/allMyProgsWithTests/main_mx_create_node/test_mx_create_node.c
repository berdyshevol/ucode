//
// Created by Oleg on 2019-10-24.
//
#include <stdio.h>
#include "libmx.h"

void print_list(t_list* head) {
    printf("HEAD->");
    for (t_list *cur = head; cur != NULL; cur = cur->next) {
        printf("[%d]->", *(int *)(cur->data));
    }
    printf("NULL\n");
}

int main(void) {
    t_list *head = NULL;
    print_list(head);
    int data_h = 0;
    head = mx_create_node(&data_h);
    print_list(head);
    return 0;
}

