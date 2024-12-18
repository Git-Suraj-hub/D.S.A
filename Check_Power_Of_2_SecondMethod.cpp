#include<iostream>
using namespace std;
void Check(int n){
    if(n<=0){
        cout<<n<<" is not a power of two ";
        return;
    }
    int power = 1;
    int count =0;
    while(power<=n){
        if(power == n){
            cout<<n<<" is a power of two"<<endl;
            cout<<n<<" is equal to the 2^"<<count;
            return ;
        }
        count++;
       power =  power<<1;
    }
    cout<<n<<" is not a power of two";
}
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    Check(n);
}