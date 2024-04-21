#include<iostream>
using namespace std;

main(){
	int num;
	cin>>num;
	int array[10];
	int j=0;
	while(num>0){
		array[j]=num%10;
		num=num/10;
	    j++;
	}
	    cout<<array[j-1];
	    for(int i=j-1 ; i>0; i--){	
	    if(array[i]==array[i-1] ){
	    	cout<<"0";
		}else if(array[i]!=array[i-1]){
			cout<<"1";
		}	
	}
}
