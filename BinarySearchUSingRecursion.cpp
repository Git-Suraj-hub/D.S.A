#include<iostream>
#include<vector>
using namespace std;
void BinarySearch(vector <int> arr, int target , int st , int end ){
    if(st>end) {
        cout<<"target Not Found";
        return;
    } 
    int mid = st + (end-st)/2;
    if(arr[mid]==target){
        cout<<"Your Target Is found at "<<mid+1<<" location";
        return;
    }
    else if (arr[mid]>target)
    {
        return BinarySearch(arr, target , st,mid-1);
        /* 10>12*/
    }
    else{
        return BinarySearch(arr, target , mid+1,end);
    }
    
}
int main(){
    vector <int> arr ={1,2,5,12,18,20,22,24,26,30};
    int target;
    cout<<"enter a Target Element : ";
    cin>>target;
    int n = arr.size();
    int st = 0;
    int end = n-1;
    BinarySearch(arr,target,st,end);
}