#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 2

    int front=-1,rear=-1;
    int a[SIZE];

    // Check the status of the queue
    int isFull() {
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
        return 0;
    }

    // Check the status of the queue
    int isEmpty() {
    if (front == -1) return 1;
        return 0;
}

    // Adding an element
    void enQueue(int element) {
    if (isFull())
        printf("\n Queue is full!! \n");

    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        a[rear] = element;
  }
}

    // Removing an element
    int deQueue() {
        int element;
        if (isEmpty()) {
            printf("\n Queue is empty !! \n");
            return (-1);
    }

    else {
    element = a[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    }

    else {
      front = (front + 1) % SIZE;
    }
    return (element);
  }
}


    void display() {
        int i;
        if (isEmpty())
            printf(" \n Empty Queue\n");
        else {
            printf("\n Front -> %d ", front);
            printf("\n Items -> ");

        for (i = front; i != rear; i = (i + 1) % SIZE) {
            printf("%d ", a[i]);
        }

    printf("%d ", a[i]);
    printf("\n Rear -> %d \n", rear);
  }
}


    int gcd(int num1, int nnum2)
{
    if(num1 == 0) return num2;
    if(num2 == 0) return num1;

    if(num1 > num2)
        return gcd(num1%num2, num2);
    else
        return gcd(num1, num2%num1);
}



int main() {
    int N;
    int block;
    int val = 0;


    printf("Enter Number Cities : ");
    scanf("%d", &N);

    for(int i=1;i<=N;i++){
            printf("Enter Number of Blocks : \n");
            scanf("%d", &block);
            enQueue(block);

            if (isFull()) {
                printf("gcd : %d\n", gcd(a[0], a[1]));
                deQueue(a);
                val = val + gcd(a[0],a[1]);
            }
    }

    printf("Maximum Number of blocks : %d\n", val);


    return 0;



}
