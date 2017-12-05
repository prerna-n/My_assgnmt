#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* mynode(int data){
	struct node* node = (struct node*) malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return(node);
}

void preorder(struct node* node){

	if(node == NULL)
	   return;
	printf("\t%d",node->data);
	preorder(node->left);
	preorder(node->right);
}


void inorder(struct node* node){

        if(node == NULL)
           return;
        inorder(node->left);
	printf("\t%d",node->data);
        inorder(node->right);
}


void postorder(struct node* node){

        if(node == NULL)
           return;
        postorder(node->left);
        postorder(node->right);
	printf("\t%d", node->data);
}

int main(){
	
	
      	struct node* root = mynode(10);	
	root->left = mynode(5);
	root->left->left= mynode(3);
	root->left->right= mynode(6);
	root->right = mynode(33);
        root->right->left= mynode(20);
        root->right->right= mynode(34);

	printf("\n preorder tree is: ");
        preorder(root);
	printf("\n postorder tree is: ");
	postorder(root);
	printf("\n inorder tree is: ");
	inorder (root);
	printf("\n");
	return 0;
}
