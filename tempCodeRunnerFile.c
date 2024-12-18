#include<stdio.h>
#define maxsize 4
int top=-1;
int rear =-1;
int queue[maxsize];
void enqueue(int n){
    if(((rear==maxsize)&&(top==0)) || (rear+1==top)){
        printf("overflow");
        return;
    }
    else if(rear==-1&&top==-1){
        top++;
    }
    else if((rear==maxsize)&&(top!=0)){
        rear=-1;
    }
    rear++;
    queue[rear]=n;
    printf("%d is addid in your queue\n",n);
}
void dequeue(){
    if((top==-1)  || (top==rear)){
        printf("underflow");
        return;
    }
  else{
    printf("%d is removed in your queue\n",queue[top]);
      top++;
  }
    if(top==maxsize){
        top=-1;
        rear=-1;
    }


}
void display(){
    for(int i=top;i<=rear;i++){
        printf("%d\n",queue[i]);
    }
}
int main(){
     enqueue(12);
     enqueue(13);
     enqueue(14);
     enqueue(15);
     enqueue(19);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    enqueue(16);
    enqueue(17);
    display();
}