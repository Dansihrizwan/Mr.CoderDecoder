#include<iostream>
using namespace std;
int BinarySearch(int arr[] , int find , int len){
	if(len>0){
		if(arr[len]==find){
			return len;
		}else{
		  return BinarySearch(arr , find ,len-1);	
		}
	}
}
main(){
	int arr[50];
	int len , find;
	cout<<"enter array size :";
	cin>>len;
	
	for(int i=0 ; i<len ; i++){
		cout<<"Enter num "<< i+1 << ": "<<endl;
		cin>>arr[i];
	}
	
	cout<<"enter num to find :";
	cin>>find;
	
	cout<<"The Number :  "<<find<<" is at :"<<BinarySearch(arr,find,len);
	cout<<" Index "<<endl;
}
