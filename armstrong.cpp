#include<Iostream>
using namespace std;
int main(){
    int n;
    int r;
    int re=0;
    cout<<"enter a number : ";
    cin>>n;
    int q=n;
    while(q>0){
        r=q%10;
        q=q/10;
        re+=r*r*r;
    }
    if(n==re){
        cout<<"given number is armstrong number ";
    }
    else{
        cout<<"given number is not a armstrong number ";
    }
}