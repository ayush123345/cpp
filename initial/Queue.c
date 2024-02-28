#include <stdio.h>
#define N 5
int queue [N] ;
int front = -1 ;
int rear = -1 ;

void enqueue () {
    int x;
    printf("Enter the value which is inserted in a queue");
    scanf("%d", &x);

    if (rear == N - 1) {
        printf("Queue is full");
    } else if (front == -1&& rear ==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }else{
        rear++;
        queue[rear]=x;
    }
}
int main(){
    enqueue();
}