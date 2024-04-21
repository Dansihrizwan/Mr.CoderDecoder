#include<iostream>
using namespace std;

int Find(int arr[], int find  , int len){
    int l=0 , h=len , m=0;
    
	while(l<h){
	m=l+(h-l)/2;
	if(find==arr[m]){
		return m;
	}else if (find<arr[m]){
		h=m-1;
	}else if (find>arr[m]){
		l=m+1;
	}
	}
	return -1;
}

main(){
	int num, count , find;
	int arr[100];
	
	cout<<"Enter number of elements :"<<endl;
	cin>>count;
	for(int i=0 ; i < count ; i++){
		cout<<"Enter Number :"<<i+1<<endl;
		cin>>arr[i];		
	}
	
	cout<<"Enter number to find :"<<endl<<endl;
	cin>>find;
	
	cout<<Find(arr,find,count);
}
