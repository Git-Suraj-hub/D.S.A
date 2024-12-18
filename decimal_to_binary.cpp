#include<iostream>
using namespace std;
void binary(int n){
    int binary[32];
    int i=0;
    int quiotient=n;
    while(quiotient>0){
        binary[i]=quiotient%2;
        quiotient=quiotient/2;
        i++;
    }
    cout<<"converting decimal to binary please wait ........"<<endl;
    for(int j=i-1;j>=0;j--){
        cout<<binary[j]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter a decimal number : ";
    cin>>n;
    binary(n);
}