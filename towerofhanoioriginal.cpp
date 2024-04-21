#include<iostream>
using namespace std;

void TOH(int n , char source , char helping , char destination){	
	static int moves=0;
	if(n>0)
	{
		TOH(n-1 , source , destination , helping);
		cout<<"Move disk from  "<<source<<" to "<<destination<<endl;
		moves++;
		cout<<moves<<endl;
		TOH(n-1 , helping ,source, destination);
	}
}

main(){
	TOH(3,'A','B','C');
}
