#include<iostream>
using namespace std;
void Binary(int n){
    int bin = 0;
    int r = 0;
    int place=1;
    while(n>0){
        r = n%2;
        bin = bin + (r*place);
        n/=2;
        place*=10;
    }
    cout<<bin;
}
int main(){
    int n;
    cout<<"enter a decimal number : ";
    cin>>n;
    Binary(n);
}