#include<iostream>
using namespace std;
void ReverseArray(int arr[],int n){
    int j = n -1;
    for(int k =0;k<n/2;k++){
        int temp = arr[k];
        arr[k] = arr[j];
        arr[j] = temp;
        j--;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"enter a size of array ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter a "<<i+1<<" Element : ";
        cin>>arr[i];
    }
    ReverseArray(arr,size);
    printarray(arr,size);
}