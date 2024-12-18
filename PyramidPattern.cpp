#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        for(int j =i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}