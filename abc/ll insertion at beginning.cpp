#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f=0,ch=1;
	struct node
	{
		int data;
		struct node*next;
	};
	struct node *ptr,*nptr,*start;
	while(ch==1)
	{
    if(f==0)
    {
    nptr=(struct node*)malloc(sizeof(struct node));
	printf("enter the value");
	scanf("%d",&nptr->data);
	nptr->next=NULL;
	start=nptr;
	ptr=nptr;
	printf("enter 1 for continue");
	scanf("%d",&ch);
	f=1;
    }
    else
    {
    	nptr=(struct node*)malloc(sizeof(struct node));
    	printf("enter the value");
    	scanf("%d",&nptr->data);
    	nptr->next=NULL;
    	ptr->next=nptr;
    	ptr=ptr->next;
    	printf("entr 1 for continue");
    	scanf("%d",&ch);
    }
}
   ptr=start;
   while(ptr!='\0')
   {
   	printf(" %d",ptr->data);
   	ptr=ptr->next;
   	
   }
   nptr=(struct node*)malloc(sizeof(struct node));
   scanf("%d",&nptr->data);
   nptr->next=start;
   start=nptr;
   ptr=start;
   while(ptr!='\0')
   {
   	printf(" %d",ptr->data);
   	ptr=ptr->next;
   	
   }
}
