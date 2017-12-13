#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f=0,ch=1;
	struct doubly
	{
		int data;
		struct doubly*next;
		struct doubly*prev;
	};
	struct doubly *ptr,*nptr,*start,*prev;
	while(ch==1)
	{
    if(f==0)
    {
    nptr=(struct doubly*)malloc(sizeof(struct doubly));
	printf("enter the value");
	scanf("%d",&nptr->data);
	nptr->next=NULL;
	nptr->prev=NULL;
	start=nptr;
	ptr=nptr;
	printf("enter 1 for continue");
	scanf("%d",&ch);
	f=1;
    }
    else
    {
    	nptr=(struct doubly*)malloc(sizeof(struct doubly));
    	printf("enter the value");
    	scanf("%d",&nptr->data);
    	
    	nptr->next=NULL;
    	nptr->prev=ptr;
    	ptr->next=nptr;
    	ptr=ptr->next;
    	printf("entr 1 for continue");
    	scanf("%d",&ch);
    }
}
   ptr=start;
   while(ptr->next)
   {
   	printf(" %d",ptr->data);
   	ptr=ptr->next;
   	
   }
   while(ptr!='\0')
   {
   	printf("\n%d",ptr->data);
   	ptr=ptr->prev;
   }
   
}
