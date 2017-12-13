#include<stdio.h>
int max=10;
int front=0;
int rear=0;
int insert(int q[],int p)
{
	if(rear>=max-1)
	return(9999);
	else
	{
		rear++;
		q[rear]=p;
	}
}
int deletion(int q[])
{
	if(front==rear)
	return(9999);
	else
	{
		front++;
		return(q[front]);
	}
}
int main()

{
	int q[1000],i,j,n,l,p;
	printf("enter 1 for insertion\n");
	printf("enter 2 for delete\n");
	printf("enter any other key for exit\n");
	
	do
	{
		scanf("%d",&n);
		switch(n)
		{
			case 1:
		    scanf("%d",&p);
			l=insert(q,p);
			printf("\n");
			if(l==9999)
			printf("queue is over flow");
			break;
			case 2:
			l=deletion(q);
			if(l==9999)
			printf("queue is empty");
			else
			printf("deleted element is %d",l);
			break;
			default:
			printf("enter valid entry");
		
		}
	}
	while(n==1||n==2);
	
	
}
