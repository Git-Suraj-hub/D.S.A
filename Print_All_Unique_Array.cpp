#include<iostream>
using namespace std;
void Unique(int arr[] , int n){
    bool unique;
    for(int i=0;i<n;i++){
        unique = true;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i] == arr[j]){
                unique = false;
                break;
            }
        }
        if(unique){
            cout<<arr[i]<<" is a unique number in your array "<<endl;
        }
    }
}
int  main(){
    int arr[] = {1,2,3,5,6,7,1,2,3};
    Unique( arr, sizeof(arr)/sizeof(arr[1]));
}