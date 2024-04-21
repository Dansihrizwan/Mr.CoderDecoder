#include<iostream>
using namespace std;
int findPower(int base ,int pow){
	int power=1;
	for(int i=pow ; i>0 ; i--){
		power=power*base;
	}
	return power;
}
main(){
	int base, pow;
	
	cout<<"Enter Base :"<<endl;
	cin>>base;
	
	cout<<"Enter Power"<<endl;
	cin>>pow;
	
	cout<<findPower(base ,pow);
	
	
}
