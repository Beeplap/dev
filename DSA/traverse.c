#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    struct node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    free(head);
    free(second);
    free(third);

    return 0;
}
