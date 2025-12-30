
#include <stdio.h>

typedef struct{
    int arr[10];
    int head;
    int tail;
} Queue;


void initializate_queue(Queue* q){
    q->head = -1;
    q->tail = 0;
}

void enqueue(Queue* q,int value){
    q->arr[q->tail] = value;
    q->tail++;
}
void printfQueue(Queue* q){
    for(int i = q->head + 1;i< q->tail;i++){
        printf("%d \n",q->arr[i]);
    }
}

int main() {
    Queue q;
    
    initializate_queue(&q);
    enqueue(&q,20);
    enqueue(&q,40);
    printfQueue(&q);
    
    
    return 0;
}
