#include<iostream>
using namespace std;
bool isprime(int num){
    for(int i=2;i<=num;i++){
        if (num%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    int a;
    int b;
    cout<<"enter a first number : ";
    cin>>a;
    cout<<"enter a second number : ";
    cin>>b;
     for(int i=a;i<=b;i++){
     if(isprime(i)){
        cout<<i<<endl;
     }
     }

}
