#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.c"

int main(int argc, char** argv)
{
    // create head
    node_t* head = NULL; 

    // initialize head to node
    head = (node_t*)malloc(sizeof(node_t));

    // assign values to node
    head->value = 0;
    head->next = NULL;

    return 0;
}
