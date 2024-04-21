#include<iostream>
using namespace std;
void rotate(int arr[],int len,int n){
	int temp,l=len-1;
	for(int i=l;i>0;i--){
		temp=arr[i] ;
		arr[i]=arr[i-1];
		arr[i-1]=temp;}
//	if(len%n!=0){
//	for(int i=0;i+n<=len-1;i++)
//	{
//		temp=arr[i];
//		arr[i]=arr[i+n];
//		arr[i+n]=temp;
//	}
//	if(n%2==0){
//		
//	}		
//	}else{
//		for(int i=len-n;i<l;i++){
//		temp=arr[i];
//		arr[i]=arr[i+1];
//		arr[i+1]=temp;
//	}
//	}
//	}
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
} 
main(){
	int arr[5];
	for(int i=0;i<5;i++){
	cout<<"Enter Number "<<i+1<<endl;
	cin>>arr[i];
	}
	rotate(arr,5,2);
	
}
