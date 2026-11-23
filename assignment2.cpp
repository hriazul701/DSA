#include<iostream>
using namespace std;
class Queue{
private:
int queue[5];
int front;
int rear;
int size;
public:
Queue(){
size = 5;
front = -1
}
rear = -1;
void insert(int value){
if (rear==size-1){
cout<<"Queue Is Full"<<endl;
return;
}
if(front==-1){
}
rear++;
= 0;
queue[rear]=value;
cout<<"Element Inserted"<<endl;
void disply(){
if(front==-1){
}
cout<<"Queue Is Empty"<<endl;
return;
for(int i=front;i<=rear;i++){
cout<<queue[i]<<" ";
}
}
void peek(){
if(front==-1){
cout<<"Queue Is Empty"<<endl;
return;
}
}
cout<<"\nFirst value "<<queue[front];
void dequeue(){
if(front==-1){
cout<<"Queue Is Empty"<<endl;
}
}
front=rear = -1
return;
cout<<"Deleted Element:"<<queue[front];
front++;
if (front>rear){
front=rear = -1;
}
};
int main(){
}
int Value;
Queue a;
for(int i=0;i<=4;i++){
cout<<"\nEnter a value:-";
cin>>Value;
a.insert(Value);
}
a.disply();
a.peek();
return 0;
