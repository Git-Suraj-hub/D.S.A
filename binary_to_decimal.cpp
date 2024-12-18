#include<iostream>
using namespace std;
int binary_to_decimal(int n){
    int remainder;
    int answer=0;
    int x=1;
    while(n>0){
        remainder = n%10;
        answer+=remainder*x;
        x*=2;
        n/=10;

    }
    return answer;
}
int main(){
    int n;
    cout<<"enter a binary number : ";
    cin>>n;
    int decimal = binary_to_decimal(n);
    cout<<"the decimal form is "<<decimal<<endl;
}