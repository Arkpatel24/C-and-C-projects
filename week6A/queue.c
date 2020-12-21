#include <stdio.h>
#include <stdlib.h>
#define MAX 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int queue[MAX];
	int front = -1, rear= -1;
	int insert();
	int display();
	int delete();
int main(int argc, char *argv[]) 
{

	insert();
	display();
	delete();
	display();
	return 0;

}
int insert()
	{
		int num;
		printf("\n Enter the element in Queue:");
		scanf("%d",&num);
		while(num != 0)
		{
			if (rear == MAX-1)
			
				printf("\n OVERFLOW");
			
			if(front == -1 && rear == -1)
			
			
				front = rear = 0;
			
			else
			
				 rear ++;
				 queue[rear]= num;
				 	
				
			printf("\n Enter the element in Queue:");
				scanf("%d",&num);
			}
				 return num;	 
		
	}
int display()
	{
	int i;
	printf("\n");
	for(i= front;i<= rear;i++)
		printf("\t %d", queue[i]);
	
	}

int delete()
{
	int num;
	printf("\nEnter the -1 to delete ");
	scanf("%d",&num);
			
			
	       if(front == -1 || front>rear)
	        printf("\n Underflow");
	   
		   		do
		   		{	   
	   	 			if(num == -1)
	   	 			{				
	   				printf("\nElement deleted from queue is : %d\n", queue[front]);
       				front++;
       				break;
       				}
       				else 
	   				{
	   	 				printf("\nEnter the -1 to delete ");
						scanf("%d",&num);
	   				}
				}while(1);
			
}
