#include<stdio.h>
#include<stdlib.h>
struct node
	{
		int data;
		struct node*next;
	};
	struct node *top=NULL,*nptr,*start,*ptr;


void push(int v)
{
	if(top==NULL)
	{
	nptr=(struct node*)malloc(sizeof(struct node));
	nptr->next=NULL;
	nptr->data=v;
	top=nptr;
    }
    else
    {
    nptr=(struct node*)malloc(sizeof(struct node));
	nptr->next=top;
	nptr->data=v;
	top=nptr;	
	}
}
void pop()
{
  int value;
  if(top)
  {
  value=top->data;
  ptr=top;
  top=top->next;
  free(ptr);
  printf("%d\n",value);
}
else
printf("stack is empty");
}
int main()
{
	int n,v;
	
	do
	{
		printf("enter 1 for inserting element\n");
		printf("enter 2 for deleting the element\n");
		printf("enter 3 for exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
			printf("enter any value");
			scanf("%d",&v);
			push(v);
			break;
			case 2:
			pop();
			break;
			default:
			printf("enterr valid entry");
		}
	}while(n==1||n==2||n==3);
}
	
