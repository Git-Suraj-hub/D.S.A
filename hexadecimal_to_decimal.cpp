#include<iostream>
#include<string>
using namespace std;
int hexadecimal_to_binary(string n){
    int x = 1;
    int ans = 0;
    int s = n.size();
    for(int i = s-1;i>=0;i--){
        if(n[i] >= '0' && n[i]<='9'){
            ans += x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans += x* (n[i] - 'A' + 10);
        }
        x*=16;
    }
    return ans;
}
int main(){
    string n;
    cout<<"enter a hexadecimal number : ";
    cin>>n;
    int answer = hexadecimal_to_binary(n);
    cout<<answer;
}