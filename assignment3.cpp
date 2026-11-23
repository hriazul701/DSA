#include <iostream>
using namespace std;
struct Node
{
};
int data;
Node *next;
class linklist
{
private:
Node *head;
public:
linklist()
{
head = NULL;
}
void create()
{
int n, value;
cout<<"Enter no of nodes";
cin>>n;
if(n<=0)
{
}
cout<<"list is empty";
for(int i=1;i<=n;i++)
{
}
cout<<"Enter value "<<i<<":";
cin>>value;
insert(value);
cout<<"\nLinked List Create.\n";
void insert(int value)
{
Node *newNode = new Node;
newNode->data = value;
newNode->next = NULL;
if (head==NULL)
{
}
head = newNode;
return;
Node *temp = head;
while(temp->next!=NULL)
{
temp=temp->next;
temp->next = newNode;
}
void display()
{
if(head==NULL)
{
cout<<"\nLinled List is Empty.\n";
return;
}
Node *temp=head;
cout<<"\nLinked List :";
while(temp!=NULL)
{
cout<<temp->data<<"->";
}
}
};
int main()
{
temp=temp->next;
linklist obj;
int value;
obj.create();
cout<< "Enter value";
cin>>value;
obj.insert(value);
obj.display();
return 0;
