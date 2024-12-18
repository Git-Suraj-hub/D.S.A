#include<iostream>
using namespace std;
void Intersection(int arr1[],int arr2[],int n1,int n2){
            cout<<"******************** The intersection OF Two Array Element Is ****************"<<endl;
    for(int i=0;i<n1;i++){
        bool common = false;
        for(int j=0;j<n2;j++){
            if(arr1[i] == arr2[j]){
                common = true;
                break;
            }
        }
            if(common){
                cout<<arr1[i]<<" ";
            }
    }
}
int main(){
    int arr2[] = {1,2,3,4,5};
    int arr1[] ={6,7,3,1};
    int n1 = sizeof(arr1) / sizeof(arr1[1]);
    int n2 = sizeof(arr2) / sizeof(arr2[1]);
    Intersection(arr1,arr2,n1,n2);
}