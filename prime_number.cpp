#include<iostream>
using namespace std;
int main(){
    int n;
    int flag=0;
    cout<<"enter a number : ";
    cin>>n;
    if(n<=1){
        flag=1;
    }
    else{
    for(int i=n-1;i>=2;i--){
        if(n%i==0){
            flag=1;
        }
    }
    }
    if(flag==1){
        cout<<"given number is not a prime number";
    }
    else{
        cout<<"given number is a prime number ";
    }
}