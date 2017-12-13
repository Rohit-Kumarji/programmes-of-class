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
   printf("enter 1 for deletion at start\n");
   printf("enter 2 for deletion at end\n");
   printf("enter 3 for deletion at anywhere\n");
   printf("enter 4 for display\n");
   scanf("%d",&k);
   switch(k)
   {
   	case 1:
   	nptr=start;
   	start=start->next;
   	start->prev=NULL;
   	free(nptr);
   	break;
   	case 2:
   	ptr=start;
   	while(ptr->next)
   	ptr=ptr->next;
   	nptr=ptr;
   	ptr->prev->next=NULL;
   	free(nptr);
   	break;
   	case 3:
   	printf("enter the value to be deleted\n");
   	scanf("%d",&l);
   	ptr=start;
   	while(ptr->data!=l&&ptr!='\0')
   	ptr=ptr->next;
   	if(ptr->next)
   	{
   	ptr->prev->next=ptr->next;
	  ptr->next->prev=ptr->prev;
	  free(ptr);	
	}
	else
	printf("value does not exist in linked list\n");
	
   	break;
    case 4:
   ptr=start;
   while(ptr!='\0')
   {
   	printf(" %d",ptr->data);
   	ptr=ptr->next;
   	
   }
}
printf("\nenter 9 for continue\n");
scanf("%d",&m);
}
while(m==9);
   
}
