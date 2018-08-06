#include<stdlib.h>
//#include<conio.h>
#include<stdio.h>


struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int r,i,j,k,l;

struct node* newNode(int data)
{
struct node* node = (struct node*)malloc(sizeof(struct node));


node->data = data;


node->left = NULL;
node->right = NULL;
return(node);
}

void display()
{
    printf("Displaying the elements of the tree:\n");
    printf("               %d\n",r);
    printf("             |     |    \n");
    printf("          %d          %d\n",i,j);




}

int main()
{

printf("Enter the first element (node):\n");
scanf("%d",&r);
struct node *root = newNode(r);
printf("Enter the other elements of the tree:\n");
scanf("%d %d %d %d",&i,&j,&k,&l);



root->left	 = newNode(i);
root->right	 = newNode(j);


root->left->left = newNode(k);
display();

return 0;
}
