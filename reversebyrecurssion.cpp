#include<iostream>
using namespace std;

string reverse(string str , int len , int i=0){
	if(i<len/2){
		char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
        return reverse(str,len,i+1);
	}else{
		return str;
	}
}

int main(){
    string str;
    cout<<"Etner String to reverse :";
    cin>>str;
    int len = str.length();

    str=reverse(str,len);
    cout<<"reversed string :"<<str;
    
}

