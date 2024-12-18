#include<iostream>
using namespace std;
int Check(int n){
    int a = 1;
    int b =0;
    while(a<n){
        a*=2;
        b++;
        if(a==n){
            cout<<"Given NUmber Is a Power Of Two"<<endl;
            return b;
        }
    }
    cout<<"Given Number Is Not A power of 2";
    return false;
}
int main(){
    int n;
    cout<<"enter a NUmber : ";
    cin>>n;
    if(n==1){
       cout<<"Given NUmber Is a Power Of Two"<<endl;
       cout<<"the number is equal to 2^0";
       return 0 ;

    }
    int Power = Check(n);
    if(Power>0){
    cout<<"the number is equal to 2^"<<Power;
}}