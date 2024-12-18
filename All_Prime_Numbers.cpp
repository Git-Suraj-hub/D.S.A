#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}
void Prime(int n){
    cout<<"the prime number of 1 to "<<n <<" is : ";
    for(int i=1;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"enter a Number : ";
    cin>>n;
    Prime(n);

}