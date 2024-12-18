#include<iostream>
using namespace std;
int add(int a,int b){
    int carry =0;
    int sum = 0;
    while(a>=0 && b>=0){
        if((a%2 == 0 )&& (b%2 == 0)){
            if(carry == 0){
                sum = sum*10 + 0;
            }
            else{
                sum = sum*10 + 1 ;
            }
        }
        if((a%2 == 1) && (b%2 == 1)){
            if(carry == 0){
                sum = sum*10 + 0;
                carry = 1;
            }
            else{
                sum = sum*10 +1;
            }
         
        if(((a%2 == 1) && (b%2 == 0) ) || ((a%2 ==0 )&& (b%2 ==1))){
            if(carry ==0){
                sum = sum*10+1;
            }
            else{
                sum =sum*10+0;
                carry =1;
            }
        }
        }
    }
}
int main(){
    int a;
    int b;
    cout<<"enter a first binary number : ";
    cin>>a;
    cout<<"enter a second binary number : ";
    cin>>b;
    add();
}