#include<stdio.h>
int max=3;
int front=0;
int rear=0;
int insert(int q[],int p)
{
	if(front==(rear+1)%max)
	return(9999);
	else
	{
		rear=(rear+1)%max;
		q[rear]=p;
	}
}
int deletion(int q[])
{
	if(front==rear)
	return(9999);
	else
	{
		front=(front+1)%max;
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
			if(l==9999)
			printf(" queue is OVER FLOW");
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
