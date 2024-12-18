#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    for(int i=n-1;i>2;i--){
        if(n%i==0){
            cout<<"given number is a prime number ";
        }
        else if(n==1){
            cout<<"given number is a prime number";
        }
        else{
            cout<<"ggiven nuimber is a prime number";
        }
    }
}