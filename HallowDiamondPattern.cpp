#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    // upper diamond;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        if(i==0){
        }
        else{
            cout<<"*";
        }
        cout<<endl;
    }

    // lower pattern
    for(int i=0;i<n;i++){
    for(int j = 0;j<i;j++){
        cout<<" ";
    }
    cout<<"*";
    for(int j = 0;j<n-i-1;j++){
        cout<<"  ";
    }
    if(i==n-1){}
    else{
    cout<<"*";
    }
    cout<<endl;
    }
}