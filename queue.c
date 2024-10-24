#include "queue.h"
#include <stdlib.h>


// Opgave 3
void initialize(queue *q) {
    q->front = NULL;
    q->rear = NULL;
    q->size = 0;
}

bool empty(const queue *q) {
    return q->front == NULL;
}

bool full(const queue *q) {
    return false;
}

void enqueue(queue *q, int x) {
    if (q->front == NULL){
        q->size = 1;
        q->front = x;
        q->rear = x;
    }

}

int dequeue(queue *q) {
    return -1;
}

// Opgave 4
void push(int element, node **head) {

}

int pop(node **head) {
    return -1;
}

void enqueueStack(queue *q, int x) {

}

int dequeueStack(queue *q) {
    return -1;
}