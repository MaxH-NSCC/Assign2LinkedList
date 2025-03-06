#include <stdio.h>
#include "linked_list.h"

int main(void)
{
    printf("Starting testing\n");
    LinkedList * my_linked_list = list_create();
    if (my_linked_list == NULL) {
        printf("Error creating list!\n");
    } else {
        printf("List created successfully!\n");
    }
    int list_size_result = list_size(my_linked_list);
    printf("Size of list: %d\n", list_size_result);

    int result = list_add(my_linked_list, "Albert");
    if (result == -1) {
        printf("Failed to add to linked list!\n");
        return 1;
    } else {
        printf("Added to linked list!\n");
    }
    list_size_result = list_size(my_linked_list);
    printf("Size of list: %d\n", list_size_result);

    for (int i = 0; i < 10; i++) {
        int result2 = list_add(my_linked_list, i+1);
        if (result2 == -1) {
            printf("FAILED\n");
            return 1;
        } else {
            printf("Added to linked list again!\n");
        }
    }
    list_size_result = list_size(my_linked_list);
    printf("Size of list: %d\n", list_size_result);

    return 0;
}
