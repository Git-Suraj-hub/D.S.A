#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,56,41,0};
    int a = INT32_MAX;
    int b = INT32_MIN;
    int pos1;
    int pos2;
    for(int i =0;i<6;i++){
        if(arr[i]>b){
            b = arr[i];
            pos1 = i;
        }
        if(arr[i]<a){
            a = arr[i];
            pos2 = i;
        }
    }
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
    

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}