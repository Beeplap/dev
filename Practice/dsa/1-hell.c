#include <stdio.h>
#include <stdlib.h>

struct Node {
    void* data;
    struct Node* link;
};

struct LinkedList {
    struct Node* head;
};





struct LinkedList* LinkedList_init() {
    struct LinkedList* list = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    list->head = NULL;
    return list;
}

void LinkedList_free(struct LinkedList* list) {
        free(list);
}

int main()
{
    struct LinkedList *list = LinkedList_init();
    
}