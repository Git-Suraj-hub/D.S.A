#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    char k = 0;
    int l=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}