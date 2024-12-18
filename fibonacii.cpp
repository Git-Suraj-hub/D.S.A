#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number ";
    cin>>a;
    int pre=0;
    int next=1;
    for(int i=0;i<=a;i++){
        cout<<next<<endl;
        int temp = next;
        next = pre+next;
        pre=temp;
    }
}