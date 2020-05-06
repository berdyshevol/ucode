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

bool cmp(void *a, void *b) {
    return *(int *)a > *(int *)b;
}

int main(void) {
    printf("Sort\n");
    t_list *head = NULL;
    //print_list(head);

    // int data1 = 1;
    // mx_push_front(&head, &data1);
    // print_list(head);

    // int data2 = 2;
    // mx_push_front(&head, &data2);
    // print_list(head);

    // int data3 = 3;
    // mx_push_front(&head, &data3);
    // print_list(head);

    // int data4 = 8;
    // mx_push_back(&head, &data4);
    // //print_list(head);

    int data5 = 7;
    mx_push_back(&head, &data5);
    //print_list(head);

    int data6 = 6;
    mx_push_back(&head, &data6);
    //print_list(head);

    int data7 = 7;
    mx_push_back(&head, &data7);
    print_list(head);

    printf("Let's sort\n");
    mx_sort_list(head, cmp);
    print_list(head);

    return 0;
}

