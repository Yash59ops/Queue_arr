#include<iostream>
using namespace std;
class queue{
int front,rear;
int*ptr;
int size;
public:
queue(){
ptr=NULL;
rear=front=-1;
size=0;
}
void createqueue(int cap){
size=cap;
ptr=new int[size];
}
void enqueue(int val){
if(rear==-1){
    rear=0;
    front=0;
    ptr[rear]=val;
}
else if((front==0&&rear==size-1)||(rear+1==front))
{
cout<<"queue overflow";
}
else if(rear==size-1){
rear=0;
ptr[rear]=val;
}
else{
rear++;
ptr[rear]=val;
}
}
void dequeue(){
 if(front==-1){
cout<<"underflow queue";
}
else if(front==rear){
        front=-1;
        rear=-1;
}
else if(front==size-1){
    front=0;
}
else{
front++;
}

}
void display(){
if(rear!=-1){
for(int i=front;i<=rear;i++){
    cout<<ptr[i];
}
}
}
};
int main(){
queue obj;
obj.createqueue(4);
obj.enqueue(1);
obj.enqueue(2);
obj.enqueue(3);
obj.enqueue(4);
obj.dequeue();
obj.dequeue();
obj.dequeue();
obj.dequeue();
obj.dequeue();
obj.display();

return 0;
}

