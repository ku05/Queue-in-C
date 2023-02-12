#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue()
{
    int x,choice=1;
    while(choice)
    {
        printf("Enter the data :\n");
        scanf("%d",&x);
        if(rear==N-1)
        {
            printf("Queue is full");
        }
        else if(front==-1&&rear==-1){
            front=rear=0;
            queue[rear]=x;
        }
        else{
            rear++;
            queue[rear]=x;
        }
        printf("Do u want to continue press 1 otherwise press 0\n");
        scanf("%d",&choice);
    }
}
void deque()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is empty:");
    }
    else if(front==rear)
    {
        printf("\n Pop element is :%d",queue[front]);
        front=rear=-1;
    }
    else{
        printf("\n Pop element is :%d",queue[front]);
        front++;
    }
}
void peek()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is empty:");
    }
    else 
    {
        printf("\n Peek element is :%d",queue[front]);
    }
}
void display()
{
    printf("\n Queue is :\n");
    int i;
    for(i=front;i<rear+1;i++)
    {
        printf("\n %d",queue[i]);
    }
}
void main()
{
    enqueue();
    display();
    deque();
    display();
    peek();
    display();
}