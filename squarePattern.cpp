#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    for(int i=0;i<n;i++){
        char ch ='A';
        for(int j='A';j<='Z';j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}