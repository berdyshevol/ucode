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

    int data1 = 0;
    mx_push_front(&head, &data1);
    print_list(head);

    int data2 = 1;
    mx_push_front(&head, &data2);
    print_list(head);
    return 0;
}


