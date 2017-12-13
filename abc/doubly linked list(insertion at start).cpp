#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f=0,ch=1,l,k,m;
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
   do
   {
   printf("enter 1 for insertion at start\n");
   printf("enter 2 for insertion at end\n");
   printf("enter 3 for insertion at anywhere");
   printf("enter 4 for display\n");
   scanf("%d",&k);
   switch(k)
   {
   	case 1:
   	printf("enter the value to be inserted");
   	scanf("%d",&l);
   	nptr=(struct doubly*)malloc(sizeof(struct doubly));
   	nptr->data=l;
   	nptr->prev=NULL;
   	start->prev=nptr;
   	nptr->next=start;
   	start=nptr;
   	break;
   	case 2:
   	printf("enter the value to be inserted");
   	scanf("%d",&l);
   	nptr=(struct doubly*)malloc(sizeof(struct doubly));
   	nptr->data=l;
   	ptr=start;
   	while(ptr->next)
   	ptr=ptr->next;
   	ptr->next=nptr;
   	nptr->prev=ptr;
   	nptr->next=NULL;
   	break;
   	case 3:
   	printf("enter the value to be inserted\n");
   	scanf("%d",&l);
   	nptr=(struct doubly*)malloc(sizeof(struct doubly));
   	nptr->data=l;
   	ptr=start;
   	while(ptr->data<l)
   	ptr=ptr->next;
   	ptr->prev->next=nptr;
   	nptr->prev=ptr->prev;
   	nptr->next=ptr;
   	ptr->prev=nptr;
   	break;
    case 4:
   ptr=start;
   while(ptr!='\0')
   {
   	printf(" %d",ptr->data);
   	ptr=ptr->next;
   	
   }
}
printf("enter 9 for continue\n");
scanf("%d",&m);
}
while(m==9);
   
}
