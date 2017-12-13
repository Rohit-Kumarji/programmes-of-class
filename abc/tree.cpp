#include<bits/stdc++.h>
#include<stdlib.h>
struct tree
	{
		char data;
		struct tree*left;
		struct tree*right;
	};
	struct tree *lptr,*rptr,*nptr,*sroot,*kptr[10000],*tptr,*root;
int top=0;
void inorder(struct tree *root)
	{
		if(root!=NULL)
		{
			inorder(root->left);
			printf("value is %c\n",root->data);
			inorder(root->right);
		}
	}
	void preorder(struct tree *root)
	{
		if(root!=NULL)
		{
			printf("value is %c\n",root->data);
			preorder(root->left);
			preorder(root->right);
		}
	}
	void postorder(struct tree *root)
	{
		if(root!=NULL)
		{
			postorder(root->left);
			
			postorder(root->right);
			printf("value is %c\n",root->data);
	
		}
	}

void push(struct tree *ptr)
{
	//printf("i am in push fn\n");
	kptr[top]=ptr;
	//printf("%d %c\n",top,kptr[top]->data);
	
	top++;
}
struct tree* pop()
{
  top--;
  tptr=kptr[top];
  return tptr;
}
int main()
{
	char a[100000];
	scanf("%s",a);
	int i,n;
	for(i=0;a[i]!='#';i++)
	{
	//printf("%c\n",a[i]);	
	if(a[i]=='(')
	{
		//printf("i am in 1st if\n");
	continue;
}
	else if(a[i]==')')
	{
		//printf("i am in 2nd if\n");
	rptr=pop();
	lptr=pop();
	sroot=pop();
	sroot->right=rptr;
	sroot->left=lptr;
	push(sroot);	
	}

	else if(a[i]=='@')
	{
		//printf("i am in 3rd if\n");
		push(NULL);
	}
	else
	{
		//printf("I AM in else\n");
		nptr=(struct tree*)malloc(sizeof(struct tree));
		nptr->data=a[i];
		nptr->left=NULL;
		nptr->right=NULL;
		push(nptr);
		}
	}
	root=kptr[0];
	printf("enter 1 for inorder traversal\n");
	printf("enter 2 for pre order traversal\n");
	printf("enter 3 for postorder traversal\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
	inorder(root);
	break;
	case 2:
	preorder(root);
	break;
	case 3:
	postorder(root);
	break;
}
}


