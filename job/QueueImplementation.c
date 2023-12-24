#include <stdio.h>
#define MAX_SIZE 100

struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

void enqueue(struct Queue *q, int value) {
    if (q->rear == MAX_SIZE - 1) {
        printf("Queue is full\n");
    } else {
        if (q->front == -1) {
            q->front = 0;
        }
        q->rear++;
        q->arr[q->rear] = value;
        printf("Enqueued %d into the queue\n", value);
    }
}

void dequeue(struct Queue *q) {
    if (q->front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Dequeued %d from the queue\n", q->arr[q->front]);
        if (q->front == q->rear) {
            q->front = q->rear = -1;
        } else {
            q->front++;
        }
    }
}

int main() {
    struct Queue myQueue = {{0}, -1, -1};

    enqueue(&myQueue, 10);
    enqueue(&myQueue, 20);
    enqueue(&myQueue, 30);

    dequeue(&myQueue);
    dequeue(&myQueue);
    dequeue(&myQueue);
    dequeue(&myQueue);  

    return 0;
}

// devkawsarkabir
// 672749