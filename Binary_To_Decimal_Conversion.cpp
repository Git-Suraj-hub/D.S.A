#include<iostream>
#include<math.h>
using namespace std;
void Decimal(int n){
    int remainder = 0;
    int place =0;
    int decimal =0;
    while(n>0){
        remainder = n%10;
        decimal += remainder * pow(2,place);
        place++;
        n/=10;
    }
    cout<<decimal;
}
int main(){
    int n;
    cout<<"enter a binary number : ";
    cin>>n;
    Decimal(n);
}