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
    printf("Push back\n");
    t_list *head = NULL;
    print_list(head);

    // int data1 = 1;
    // mx_push_front(&head, &data1);
    // print_list(head);

    // int data2 = 2;
    // mx_push_front(&head, &data2);
    // print_list(head);

    // int data3 = 3;
    // mx_push_front(&head, &data3);
    // print_list(head);

    int data4 = 4;
    mx_push_back(&head, &data4);
    print_list(head);

    int data5 = 5;
    mx_push_back(&head, &data5);
    print_list(head);

    int data6 = 6;
    mx_push_back(&head, &data6);
    print_list(head);

    int data7 = 7;
    mx_push_back(&head, &data7);
    print_list(head);

    return 0;
}

