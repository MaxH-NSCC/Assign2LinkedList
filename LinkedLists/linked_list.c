#include "linked_list.h"
#include <stddef.h>
#include <stdlib.h>

// Linked list structures
typedef struct LinkedListNode {
    void * data;
    struct LinkedListNode * next;
} LinkedListNode;

struct LinkedList {
    size_t size;
    struct LinkedListNode * head;
    struct LinkedListNode * tail;
};

// Linked list functions

// Creates and initializes an empty linked list
LinkedList *list_create(void) {
    // create and return an empty linked list:
    LinkedList * list = malloc(sizeof(LinkedList));
    if (list == NULL) {
        return NULL;
    }
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;
    return list;
};

// Inserts a new node at the end of the list
// returns 0 on success. -1 on failure
int list_add(LinkedList *list, void *data) {
    if (list == NULL) return -1;

    LinkedListNode * new_node = malloc(sizeof(LinkedListNode));
    if (new_node == NULL) return -1;
    new_node->data = data;
    new_node->next = NULL;
    if (list->size == 0) {
        list->head = new_node;
    } else {
        list->tail->next = new_node;
    }
    list->tail = new_node;
    list->size++;
    return 0;
};

// Inserts a new node at a specific index (0-based)
// Returns 0 if successful, -1 if index is out of bounds
int list_insert_at(LinkedList *list, size_t index, void *data) {

};

// fetches an element at specified index
// returns 0 on sucsess, -1 on failure
int list_get_at(LinkedList *list, size_t index, void **out_data) {

};

// Removes and returns the element at a specific index
// returns 0 on sucsess, -1 on failure
int list_remove_at(LinkedList *list, size_t index, void **out_data) {

};

// Returns the size of the list
size_t list_size(const LinkedList *list) {

};

// Frees all nodes and also applies a free function to stored data
// if NULL is passed in for the function pointer it does not free any data
// and only frees the list itself.
void list_destroy(LinkedList *list, void (*free_func)(void *)) {

};

// Linked list iterator functions

// the linked list iterator is an "object" that
// helps us move from one item to the next item
// efficiently, but without exposing the internal components of the
// linked list itself.
typedef struct ListIterator ListIterator;

// Creates an iterator for the given list starting at the first element
ListIterator *list_iterator_create(LinkedList *list) {

};

// Advances the iterator and retrieves the next element
// Returns 1 if there is a next element, 0 if the end of the list is reached
int list_iterator_next(ListIterator *iter, void **out_data) {

};

// Resets the iterator to the start of the list
void list_iterator_reset(ListIterator *iter) {

};

// Destroys the iterator and frees any allocated memory
// notice this has nothing to do with the list that this iterator is pointing to
void list_iterator_destroy(ListIterator *iter) {

};