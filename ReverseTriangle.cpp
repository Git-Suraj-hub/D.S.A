#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}