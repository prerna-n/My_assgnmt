#include<iostream>
using namespace std;

int count = 1;


struct node{
	int data;
	node *left;
	node *right;
};

struct node* newNode(int data){
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;
	return Node;
}

struct node* Insert(node* root, int data){
	
	if(root == NULL)
		return newNode(data);
	if(data < root->data)
		root->left = Insert(root->left, data);
	else
		root->right = Insert(root->right, data);
	return root;

}

void preorder(node* Node){

	if(Node == NULL)
	   return;

	cout << Node->data <<"\t";
	preorder(Node->left);
	preorder(Node->right);
}

void inorder(node* Node){

        if(Node == NULL)
           return;

	inorder(Node->left);
        cout << Node->data <<"\t";
        inorder(Node->right);
     
}

void postorder(node* Node){

        if(Node == NULL)
           return;
        
        postorder(Node->left);
        postorder(Node->right);
	cout << Node->data <<"\t";
}

int countNodes(node* Node){
	
	if(Node == NULL)
         {
	   return 0;
	 }
	if(Node->left != NULL)
	 {
	   count = count + 1;
	   count = countNodes(Node->left);
	 }
	if(Node->right != NULL)
	 {
	   count = count + 1;
	   count = countNodes(Node->right);
	 }
	
  return count;
}


int main(){

	
	node* root = newNode(60);
	
	Insert(root, 50);
	Insert(root, 70);
	Insert(root, 40);
	Insert(root, 30);
	Insert(root, 80);
	Insert(root, 75);
        Insert(root, 65);
        Insert(root, 45);
        Insert(root, 55);
        Insert(root, 90);
        Insert(root, 67);
	cout << "\n preorder traversal:";
	preorder(root);
	cout << "\n inorder traversal:";
	inorder(root);
	cout << "\n postorder traversal:";
	postorder(root);
	//cout << "\n";

	countNodes(root);
	cout << "\n number of nodes = "<< count << endl;
	return 0;
}
