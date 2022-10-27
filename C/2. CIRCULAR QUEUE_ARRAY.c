#include<stdio.h>
#include<conio.h>
#include<process.h>

void Insert_in_CQueue();
void Display_CQueue();
void Delete_from_CQueue();

int CQueue[100],front=-1,rear=-1,size;

int main()
{
  int choice=0;

  printf("Enter the size of Circular Queue to be formed: ");
  scanf("%d",&size);


  while(1)
  {
   printf("\n\n\nOPERATIONS ON CIRCULAR QUEUE\n");
   printf("\nChoose:\n1 for Insertion in Circular Queue\n2 for Deletion in Circular Queue\n3 for Displaying the Circular Queue\n4 to stop executing.\n");
   scanf("%d",&choice);

   switch(choice)
   {
	      case 1: Insert_in_CQueue();
		          break;
		  case 2: Delete_from_CQueue();
		          break;
          case 3: Display_CQueue();
                  break;
		  case 4: exit(0);
		          break;
		  default: printf("Wrong Choice!");
		          break;
   }
  }
  return 0;
}

void Insert_in_CQueue()
{
    int element;
    {
       if((front==0 && rear==size-1)||(front==rear+1))
          printf("\nOVERFLOW! The Circular Queue is already full");
       else
       {
          printf("\nEnter element to be inserted in the Queue: ");
          scanf("%d",&element);
          if(rear==-1)
             front=rear=0;
          else if(rear==size-1)
             rear=0;
          else
             rear++;
          CQueue[rear]=element;
          printf("\nElement %d has been inserted in the Circular Queue.\n",element);
       }
    }
}

void Display_CQueue()
{
	int i;
	if(front==-1)
	   printf("Empty queue! No elements found.\n");
	else if(rear>=front)
	{
	    printf("\nNow the Queue is: \n");
        for(i=front;i<=rear;i++)
		     printf("%d   ",CQueue[i]);
	}
	else if(rear<front)
    {
        printf("\nNow the Queue is: \n");
        for(i=front;i<size;i++)
		     printf("  %d   ",CQueue[i]);
        for(i=0;i<=rear;i++)
		     printf("  %d   ",CQueue[i]);
    }
}

void Delete_from_CQueue()
{
     if(front==-1)
         printf("\nUNDERFLOW! Empty queue! No elements found.");
     else
     {
  	     if(front==rear)
  	        front=rear=-1;
         else if(front==size-1)
            front=0;
  	     else
  	        front++;
         printf("\nElement %d has been deleted from the Circular Queue.\n",CQueue[front-1]);
  	 }
}

