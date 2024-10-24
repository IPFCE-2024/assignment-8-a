#include "insertion_sort.h"
#include <stdio.h>


node* isort(node *list) {
    node* sorted = NULL;
    

    node* next_element = list;

    while(next_element != NULL) {
        node* current = next_element;
        next_element = next_element->next;
        if(sorted = NULL || current->data < sorted->data){
            current->next = sorted;
            sorted = current;
            continue;
        }
        node* next_sorted = sorted;
    while(next_sorted->next != NULL) {
        if(current->data < next_sorted->next->data){
            current->next = next_sorted->next;
            next_sorted->next = current; 
            break;
        }
        next_sorted = next_sorted->next;
    }
    if(next_sorted->next == NULL) {
        next_sorted->next = current;
        current->next = NULL;
    }

        
    }




    return list;
}

