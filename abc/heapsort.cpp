
#include<stdio.h>
int a[10000];

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
void heapify(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
	adjust(a,i,n);
}
void heapsort(int a[],int n)
{
	int i,temp;
	
	for(i=n;i>1;i--)
	{
		temp=a[1];
		a[1]=a[i];
		a[i]=temp;
		adjust(a,1,i-1);
		
		
		
	}
   
}

int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	heapify(a,n);

heapsort(a,n);
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
	
}
