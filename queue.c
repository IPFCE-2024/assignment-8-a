#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

// Opgave 3
void initialize(queue *q) {
    q->front = NULL;
    q->rear = NULL;
    q->size = 0;
    assert(q->size == 0);
}

bool empty(const queue *q) {
    return q->front == NULL;
}

bool full(const queue *q) {
    return false;
}

void enqueue(queue *q, int x) {
    newNode* tempqueue = (newNode*)malloc(sizeof(newNode));

    tempqueue->data = x;
    tempqueue->next = NULL;

    if(q->rear == NULL){
        q->front = tempqueue;
        q->rear = q->front;
    }
    else {
        q->rear->next = tempqueue;
        q->rear = tempqueue;
    }
    q->size++;
}

int dequeue(queue *q) {
    assert(q->front != NULL);
    node* p = q->front;
    int x = p->data;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(p);
    q->size--;
    return x;
}

// Opgave 4
void push(int element, node **head) {
    newNode* tempqueue = (newNode*)malloc(sizeof(newNode));
    node* p = *head;
    tempqueue->data = element;
    tempqueue->next = NULL;

    while(p != NULL) {
        p = p->next;
    }
    p->next = tempqueue;
}

int pop(node **head) {
    if (*head == NULL){
        exit(1);
    }
    node* p = *head;
    int v = p->data;
    p = p->next;
    *head = p;

    return v;
    }

void enqueueStack(queue *q, int x) {
    push(x,q);
}

int dequeueStack(queue *q) {
    pop(q);
    return -1;
}
