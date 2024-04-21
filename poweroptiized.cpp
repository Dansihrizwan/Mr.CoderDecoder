#include<iostream>
using namespace std;

int findPower(int base ,int pow){
	if(pow==1){
		return base;
	}else{
		if(pow%2==0){
			return findPower(base*base,pow/2);
		}else{
			return base*findPower(base*base,pow/2);
		}
		
	}
}
main(){
	int base, pow;
	
	cout<<"Enter Base :"<<endl;
	cin>>base;
	
	cout<<"Enter Power"<<endl;
	cin>>pow;
	
	cout<<findPower(base ,pow);
	
	
}
