#include <iostream.h>
#include <conio.h>

class Node
{
public:
int data;
Node *left, *right;
Node(int x){
data=x;
left = right= NULL;
}
};

class BST{
public:
Node* root;
//Afunctiontocreatebinarysearchtree. 
void insert(Node* root, int data)
{
//Create node using data entered by user.
Node *temp = new Node(data);
Node* temp1;
temp1=root;
//If root is null then then ode created.
if(root == NULL)
root = temp;
else
{
//Search the position forth new node to be inserted.
while(temp1 != NULL)
{
if(temp1->data<data)
{
if(temp1->right==NULL)
{
//Ifcurrentnodeis NULLthenthevaluewillbeinsertedhereand break.
temp1->right=temp;
break;
}
//Shift pointer to the left.
temp1 = temp1->right;
}
else if(temp1->data>data)
{
if(temp1->left==NULL)
{
temp1->left=temp;
break;
}
temp1 = temp -> left;
}
}
return;
}
}

//Display all the element in the binary search tree
//In order Tree Traversal
void display(Node* root)
{
if(root!= NULL)
{
display(root->left);
cout<<root->data<<" ";
display(root->right);
}
}
};


int main() {
char ch;
int n,arr[20],size;
BST b1;
b1.root=new Node(20);
cout<<"Enter the size of array under 20:";
cin>>size;
cout<<"Enter the elements in array:";
for(int j=0;j<(size-1);j++)
{
cin>>arr[j];
}
//Construct the binary search tree.
for(int i = 0; i < (size-1); i++)
b1.insert(b1.root,arr[i]);
cout<<"\n Entered Element in INORDER Traversal:\n";
b1.display(b1.root);
return 0;
}