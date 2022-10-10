#include<stdio.h>
#include<stdlib.h>
struct queue{
    int data;
    struct queue *next;
};
struct queue *front = NULL;
struct queue *rear = NULL;
typedef struct queue Queue;

void Enqueue(Queue **front,Queue **rear,int Item)
{
    Queue *new = malloc(sizeof(Queue));
    new->next=NULL;
    new->data=Item;
    
    if(*front == NULL && *rear == NULL)
    {
        *front = *rear = new;
    }
    else
    {
        (*rear)->next=new;
        *rear=new;
    }
}

int Dequeue(Queue **front,Queue **rear)
{
    Queue *temp;
    if(*front == NULL)
    {
        printf("Queue is Empty can not Dequeue.\n");
    }
    else
    {
        temp = *front;
        int Data;
        if(*front == *rear)
        {
            *front = *rear = NULL;
            free(temp);
        }
        else
        {
            int Item;
            Item=(*front)->data;
            (*front)=(*front)->next;
            free(temp);
            return Item;
        }
    }
}

void Display(Queue *front,Queue *rear)
{
    if(front==NULL && rear==NULL)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        while(front!=NULL)
        {
            printf("%d  ",front->data);
            front=front->next;
        }
    }
}

void main()
{
    int ch;
    int Data;
    while(1)
    {
        printf("\nEnter 1:-Enqueue 2:-Dequeue 3:-Display 4:-Exit.\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter data to be inserted: ");
            scanf("%d",&Data);
            Enqueue(&front,&rear,Data);
            Display(front,rear);
            break;

            case 2:
            Dequeue(&front,&rear);
            Display(front,rear);
            break;

            case 3:
            Display(front,rear);
            break;
            
            case 4:
            exit(0);
            break;

            default:
            printf("Invalid Input.\n");
        }
    }
}
