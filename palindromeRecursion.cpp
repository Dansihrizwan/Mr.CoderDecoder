#include<iostream>
using namespace std;

int pallindrome(int num, int rev=0){ 
    
    
    if(num!=0){
    int temp = num%10;
	rev = (rev * 10) + temp;
	num /= 10;
    pallindrome(num,rev);
	}else{
		return rev;
	}
   	
		
}
main(){
	int num;
	cin>>num;
	int i = pallindrome(num);
    if(i==num){
    	cout<<"Pallindrome";
	}else{
		cout<<"not pallindrome";
	}
}

