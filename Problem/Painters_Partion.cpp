#include<iostream>
using namespace std;
int Sum(int arr[], int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
bool isvalid(int mid,int arr[],int n,int m){
    int painter =1;
    int sum =0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){return false;}
        if(arr[i] + sum <=mid){
            sum+=arr[i];
        }
        else{
            painter++;
            sum = arr[i];
        }
    }
    if(painter<=m){
        return true;
    }
    else{
        return false;
    }

}
int Partion(int arr[] , int n , int m){
    int start = 0;
    int end = Sum(arr,n);
    int ans = -1;
    if(n<m){return ans;}
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isvalid(mid,arr,n,m)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[] = {10,10,10,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m;
    cout<<"Enter a Number Of Painter : ";
    cin>>m;
    int result = Partion(arr,n,m);
    if(result>0){
    cout<<"The Minimum Amount Of Time Need To Paint by a "<<m<<" Painter is "<<result<<" minutes ";
}
else{
    cout<<"not possible the minimum amount because the painter is grater than the painting board and the condition is every painter do a some painting";
}
}