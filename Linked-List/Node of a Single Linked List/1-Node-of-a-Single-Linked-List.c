#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main (void)
{
    struct node *head = malloc(sizeof(*head));

    if (head == NULL)
    {
        printf("memory allocation failed.\n");

        return 1;
    }

    head -> data = 10;
    head -> link = NULL;

    printf("Value inside the head: %d\n", head -> data);                               // value stored in datatype 'data'
    printf("NULL address of Link: %p\n", (void *) head -> link);      // NULL address of 'link'
    printf("Address of 'data' stored in head node: %p\n", (void *) head);                                    // address of 'data' stored in 'head'
    printf("Address of head node: %p\n", (void *) &head);                                   // address of 'head'

    free(head);
    head = NULL;
}