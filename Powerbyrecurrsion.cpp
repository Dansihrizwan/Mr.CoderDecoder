#include<iostream>
using namespace std;
int findPower(int base ,int pow){
	if(pow==0){
		return 1;
	}else{
		return base*findPower(base , pow-1);
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
