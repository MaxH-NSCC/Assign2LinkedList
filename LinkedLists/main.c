#include <stdio.h>
#include "linked_list.h"

int main(void)
{
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    LinkedList * my_linked_list = list_create();
    if (my_linked_list == NULL) {
        printf("Error creating list!\n");
    } else {
        printf("List created successfully!\n");
    }
    return 0;
}
