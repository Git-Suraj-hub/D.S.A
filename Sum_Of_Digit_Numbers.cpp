#include<iostream>
using namespace std;
void Sum(int n){
    int sum = 0;
    int remainder;
    cout<<"the Sum of ";
    while(n>0){
        remainder = n%10;
        sum+=remainder;
        n/=10;
        if (n>=1)
        {
            /* code */
        cout<<remainder<<" + ";
        }
        else{
             cout<<remainder;
        }
        
    }
    
    cout<<" is " <<sum;
}
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    Sum(n);
}