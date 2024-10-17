// Write a menu driven program to perform following insertion operations in a single linked list:
#include<iostream>
using namespace std;
int queue[20],n,front=0,rear=0;
void insert(int val){
    if(rear==n){
        cout<<"Queue overflow"<<endl;
    }
    else{
        rear++;
        queue[rear]=val;
    }
}
void Delete(){
  if(front==rear){
    cout<<"\nQueue is empty\n";
    return;
  }
  else{
    for(int i=0;i<rear-1;i++){
        queue[i]=queue[i+1];
    }
    rear--;
  }
  return;
}
void Display(){
    int i;
    if(front==rear){
        cout<<"\n Queue is empty";
        return;
    }
    

    for(i=front;i<rear;i++){
        cout<<"\t"<<queue[i+1];
    }
    return;
}
int main(void){
    cout<<"\n Enter size of queue:";
    cin>>n;
    cout<<"\n Enter elements of queue:";
    for(int i=0;i<n;i++){
        cin>>queue[i];
    }
Display();
insert(60);
Display();
Delete();
Delete();
cout<<"\n After deletion of 2 nodes,queue=\n";
Display();
return 0;
}

