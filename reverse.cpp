#include<iostream>
using namespace std;

string reverse(string str){
    int len = str.length();
    cout<<len<<endl;
    for (int i = 0; i < len / 2; i++){
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    return str;
}

int main(){
    string str;
    cout<<"Enter String to reverse :";
    cin>>str;
    str=reverse(str);
    cout<<"reversed string :"<<str;
    
}

