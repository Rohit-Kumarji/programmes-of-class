#include<stdio.h>
int a[100000],m;
void display(int m )
{
int i;
if(m==0)
printf("tree is empty ");
else
{
for(i=1;i<=m;i++)
printf(" %d",a[i]);
}
}
void adjust(int a[],int i,int n)
{
	int j,temp;
	j=2*i;
	temp=a[i];
	while(j<=n)
	{
		if(a[j]<a[j+1]&&(j+1)<=n)
		j=j+1;
		if(temp>=a[j])
		break;
		a[j/2]=a[j];
		j=2*j;
	}
	a[j/2]=temp;
}
void insert(int num,int m)
{
	int i,f=0;
	i=m+1;
	while(i>1&&num>a[i/2])
	{
			a[i]=a[i/2];
			i=i/2;
		}
		a[i]=num;
	
}
void deletetion(int m)
{
	int j,temp;
	if(m==0)
	printf("treee is empty");
	else
	{
	temp=a[1];
	a[1]=a[m];
	a[m]=temp;
	
	
printf("deleted element is %d",a[m]);
j=m-1;
adjust(a,1,j);
}

}
int main()
{
	int n,i,p,m;
	do{
		printf("enter 1 for creation\n");
		printf("enter 2 for insertion\n");
		printf("enter 3 for deletion\n");
		printf("enter 4 for display\n");
		printf("enter 5 for exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
			scanf("%d",&m);
			for(i=1;i<=m;i++)
			scanf("%d",&a[i]);
			break;
			case 2:
			scanf("%d",&p);
			insert(p,m);
			m=m+1;
			break;
			case 3:
			deletetion(m);
			if(m>=1)
			m=m-1;
			break;
			case 4:
            display(m);
			break;
			default:
			printf("enter valid entry");
		}
	}while(n==1||n==2||n==3||n==4);
	
	
}
