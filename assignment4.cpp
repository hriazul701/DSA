#include <iostream>
using namespace std;
struct node
{
int data;
};
node *left;
node *right;
class binary
{
private:
node *root;
public:
binary()
{
root = NULL; // or nullptr (C++11 and later)
}
node* create()
{
}
int value;
cout << "\nEnter node value (-1 for no node): ";
cin >> value;
if (value == -1)
return NULL;
node *newnode = new node;
newnode->data = value;
cout << "Enter left child of " << value << ": ";
newnode->left = create();
cout << "Enter right child of " << value << ": ";
newnode->right = create();
return newnode;
void build()
{
cout << "\nCreate Binary Tree\n";
root = create();
}
void inorder(node *temp)
{
if (temp == NULL)
return;
}
inorder(temp->left);
cout << temp->data << " ";
inorder(temp->right);
void preorder(node *temp)
{
if (temp == NULL)
return;
}
cout << temp->data << " ";
preorder(temp->left);
preorder(temp->right);
void postorder(node *temp)
{
if (temp == NULL)
return;
postorder(temp->left);
};
}
postorder(temp->right);
cout << temp->data << " ";
void displayinorder()
{
}
cout << "\ninorder Traversal: ";
inorder(root);
cout << endl;
{
void displaypreorder()
cout << "\npreorder Traversal: ";
preorder(root);
cout << endl;
}
void displaypostorder()
{
}
cout << "\npostorder Traversal: ";
postorder(root);
cout << endl;
int main()
{
binary B;
int choice;
cout <<"\n1.display inorder";
cout <<"\n2.display preorder";
cout <<"\n3.display postorder";
cout <<"\enter your choice";
cin >> choice;
switch (choice)
{
case 1:
B.build();
B.displayinorder();
break;
case 2:
B.build();
B.displaypreorder();
break;
case 3:
B.build();
B.displaypostorder();
break;
default:
}
}
cout <<"\ninvalid choice!";
return 0;
