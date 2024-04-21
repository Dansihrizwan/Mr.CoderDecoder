#include<iostream>
using namespace std;
int BinarySearch(int arr[] , int find , int len){
	for(int i = 0  ; i<len ; i++){
		if(arr[i]==find){
			return i;
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
	
	cout<<"The Number :  "<<find<<" is at :"<<BinarySearch(arr,find , len);
	cout<<" Index "<<endl;
}
