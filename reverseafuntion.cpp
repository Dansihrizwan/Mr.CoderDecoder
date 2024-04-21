#include<iostream>
using namespace std;
int reverseFunction(int *ptr,int len){
	int j=len-1,temp;
	
	for(int i=0;i<=j ; i++){
		if(*(ptr+i)!=*(ptr+j)){
			temp=*(ptr+i);
		    *(ptr+i)=*(ptr+j);
			*(ptr+j)=temp;
		    j--;
		}
		
	}
}
main(){
	int array[5];
	for(int i=0; i<5; i++){
		cout<<"Enter number "<<i<<endl;
		cin>>array[i];
	}
	reverseFunction(array,5);
	
	for(int i=0 ; i<5; i++){
		cout<<array[i]<<" ";
}
}
