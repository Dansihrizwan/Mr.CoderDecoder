#include<iostream>
using namespace std;

int palindrome(string str,int len,int i){
	if(i==len){
	return 0;
	}
	if(str[len]==str[i]){
		return palindrome(str,len-1 , i+1);
	}else if(str[len]!=str[i]){
		return 1;
	}
}

main(){	
	string str;
	cout<<"Enter a string to check :"<<endl;
	cin>>str;
    int len=str.length();
    
	int check=palindrome(str,len-1,0);
	if(check==0){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
}
