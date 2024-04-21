#include<iostream>
using namespace std;

main(){
	int temp , num , rev=0;
	
	cout<<"Enter Number :"<<endl;
	cin>>num;
	int i = num ; 
	while(num!=0){		
        temp = num%10;
		rev = (rev * 10) + temp;
		num /= 10;  
	}
	
	if( rev==i ){
		cout<<"Its  a pallindrome "<<endl;
	}else{
		cout<<"Not a pallindrome "<<endl;
	}
}			

