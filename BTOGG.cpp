#include<iostream>
using namespace std;
int BTOG(int num, int last=0){
	if(num>0){
	int temp=num%10;
	if(last==num%10){
	cout<<"0";
	}else{
	    cout<<"1";
	}
	BTOG(num/10 ,temp);
    }
}
main(){	
    int num , rev=0 , temp;
    cout<<"Enter binary number :"<<endl;
	cin>>num;
    cout<<"garv code :\n";
    while(num!=0){
    	temp=num%10;
    	rev = rev*10 +temp ;
    	num/=10;
	}
    BTOG(rev);
}

