#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *l,*rt;
};
struct node* create(int n)
{
	struct node *r=(struct node*)malloc(sizeof(struct node));
	r->data=n;
	r->l=r->rt=NULL;
	return r;
}
void inorder(struct node *r)
{
	if(r!=NULL)
	{
		inorder(r->l);
		printf("%d ",r->data);
		inorder(r->rt);
	}
}
void preorder(struct node *r)
{
	if(r!=NULL)
	{
		printf("%d ",r->data);
		preorder(r->l);
		preorder(r->rt);
	}
}
void postorder(struct node *r)
{
	if(r!=NULL)
	{
		postorder(r->l);
		postorder(r->rt);
		printf("%d ",r->data);
	}
}
void search(struct node *n, int x, int *f)
{
	if(n!=NULL)
	{
		if(n->data==x)
		{
			*f=1;
			return;
		}
		search(n->l,x,f);
		search(n->rt,x,f);
	}
}
void MinMax(struct node *r, int *m, int *le)               //pass le=m=root->data
{
	if(r!=NULL)
	{
		if(r->data > *m)
			*m=r->data;
		if(r->data < *le)
			*le=r->data;
		MinMax(r->l,m,le);
		MinMax(r->rt,m,le);
	}
}
int main()
{
	struct node *root=NULL;
	/*root=create(1);
	root->l=create(2);
	root->rt=create(3);
	root->l->l=create(4);
	root->l->l->rt=create(5);
	root->rt->l=create(6);
	root->rt->l->rt=create(7);
	*/
	root=create(1);
	root->l=create(2);
	root->rt=create(3);
	root->l->l=create(4);
	root->l->l->rt=create(5);
	root->rt->l=create(6);
	root->rt->rt=create(7);
	root->rt->l->l=create(8);
	root->rt->l->l->rt=create(9);
	printf("Inorder : ");
	inorder(root);
	printf("\n");
	printf("Preorder : ");
	preorder(root);
	printf("\n");
	printf("Postorder : ");
	postorder(root);
	printf("\n");
	int x,f;
	printf("\nEnter No. to be Searched : ");
	scanf("%d",&x);
	search(root,x,&f);
	if(f==1)
		printf("No. Found\n");
	else
		printf("No. Not Found\n");
	int m=root->data,le=root->data;
	MinMax(root,&m,&le);
	printf("\nMax Value of Tree : %d\nMin Value of Tree is : %d\n",m,le);
	return 0;
}
