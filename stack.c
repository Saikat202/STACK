#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX],top=-1;
void push();
void pop();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.push \n2.pop \n3.display \n4.exit");	
		printf("\nEnter your choice:");
		scanf("%d",&ch);

		if(ch==1)
			push();
		else if(ch==2)
			pop();
		else if(ch==3)
			display();
		else if(ch==4)
			break;
		else
			printf("Invalid choice");
	}
	return 0;
}
void push()
{
	int item;
	if(top==MAX-1)
		printf("OVERFLOW");
	else
	{
		top=top+1;
		printf("Enter item:");
		scanf("%d",&item);
		stack[top]=item;
		printf("Item insert successfully...");
	}
}
void pop()
{
	if(top==-1)
		printf("UNDERFLOW");
	else
	{
	
		top=top-1;
		printf("Item deleted successfully...");
	}
}
void display()
{
	int i;
	if(top==-1)
		printf("EMPTY");
	else
	{
	
		printf("Items are:");
		for(i=top;i>=0;i--)
			printf("%d  ",stack[i]);
	 }	
}
	

