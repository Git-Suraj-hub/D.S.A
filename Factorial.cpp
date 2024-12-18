#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a Number ";
    cin>>n;
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
cout<<"the factorial of "<<n<<" is : "<<fact;
}