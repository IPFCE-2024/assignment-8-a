#include "insertion_sort.h"
#include <stdio.h>


node* isort(node *list) {
    node* sorted = NULL;
    node* current = list;

    while(current != NULL) {
        node* next_element = current->next;
        if(sorted == NULL || current->data < sorted->data){
            current->next = sorted;
            sorted = current;
            
        } else{
        node* next_sorted = sorted;
    while(next_sorted->next != NULL && next_sorted->next->data < current->data) {
        next_sorted = next_sorted->next;
        }
    current->next = next_sorted->next;
    next_sorted->next = current;
    }
    current = next_element;
    }
    return sorted;
}

