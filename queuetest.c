#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

int main() {
    queue* q;
    int x0 = 1;
    int x1 = 2;
    enqueue(q,1);
    enqueue(q,2);

    int y0 = dequeue(q);
    int y1 = dequeue(q);


}
