#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a character ";
    cin>>ch;
    // if(ch>='a' && ch<='z'){
    //     cout<<"your character is lower case";
    // }
    // else if(ch>='A' && ch<='Z'){
    //     cout<<"your character is upper case";
    // }
    // else{
    //     cout<<"invalid chaarcter";
    // }
    if(ch>=65 && ch<= 90){
        cout<<"your chracter is UpperCase";
    }
    else if(ch>=97 && ch<=122){
    cout<<"your character is LowerCase";
}
else{
    cout<<"invalid character";
}
} // namespace std;

