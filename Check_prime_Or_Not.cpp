#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    int flag =1;
    if (n==1)
    {
       flag = 1;
    }
    else
    {
        for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag =1;
            break;
        }
        flag = 0;
    }
    }
    if(flag==0){
        cout<<"your number is a prime Number ";
    }
    else{
        cout<<"your Number is not a prime number ";
    }
}