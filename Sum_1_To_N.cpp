#include<iostream>
using namespace std;
    int sum =0;
void Sum(int n){
    if(n<1){return;}
    sum+=n;
    n--;
    Sum(n);
}
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    // int sum =0;
    // for(int i=0;i<=n;i++){
    //     sum+=i;
    // }
    // cout<<sum;
     Sum(n);
    cout<<sum;
     
    
}