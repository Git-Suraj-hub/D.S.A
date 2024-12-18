#include<iostream>
using namespace std;
int fact(int n){
    int Fact = 1;
    while (n>0){
        Fact *=n;
        n--;
    }
    return Fact;
    
}
void Ncr(int p , int c){
    int calc = fact(p) / (fact(c) *fact(p-c));
    cout<<calc;
}
int main(){
    int n;
    cout<<"Enter a N value :  ";
    cin>>n;
    int c;
    cout<<"Enter a C Value : ";
    cin>>c;
    fact(n);
    Ncr(n,c);
    
}