#include<stdio.h>
#include<conio.h>
int s[10];
int push(int s[],int m,int t)
{
if(t==m-1)
{
printf("stack full");
return t;
}
else
{
int v;
scanf("%d",&v);
t++;
s[t]=v;
return t;


}	
}
int pop(int s[],int t)
{
if(t==0)
{
printf("stack empty");
return t;
}
else
{
printf("deleted element is %d",s[t]);
t--;
return t;
}	
}
void display(int s[],int t)
{
	int i;
	for(i=t;i>0;i--)
	printf("%d",s[i]);
}

int main()
{
	int c,t=0,m=10;
	printf("enter 1 for push\n");
	printf("enter 2 for pip\n");
	printf("enter 3 for display\n");
	printf("enter anyone for exit");
	do{
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			t=push(s,m,t);
		    break;
			case 2:
			t=pop(s,t);
			break;
			case 3:
			display(s,t);
			break;
			default:
			printf("Invalid entry");
			
		}
	}
	while(c==1||c==2||c==3);
	getch();
}

