#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {3,2,4};
    int target = 6;

    int i =0;
    int j=nums.size() -1;
    while(i<=j){
        int ans = nums[i] + nums[j];
        if(ans==target){
            cout<<"["<<i<<","<<j<<"]";
            return 0;
        }
        else if(ans>target){
            j--;
        }
        else{
            i++;
        }
    }
}