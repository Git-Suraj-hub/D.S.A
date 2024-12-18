#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        if(i%2==1){
            sum+=i;
        }
    }
    cout<<"the sum of all odd number is : "<<sum;

}