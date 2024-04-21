#include<iostream>
using namespace std ;

int main()
{
	int binary, rem=0, rev=0, flag=0, temp=0 ;
	cout<<"Enter a binary number "<<endl ;
	cin>> binary ;
	
	for(int i=0 ; i<4 ;i++)
	{
		rev = (rev*10) + (binary%10) ;
		binary /= 10 ;
	}
	
	for(int i=0 ; i<4 ;i++)
	{
		rem = rev%10 ;
		flag++ ;
		if(flag==1)
		{
			cout<<rem ;
		}else{
			if(temp==rem)
			{
				cout<<0 ;
			}else{
				cout<<1 ;
			}
		}
		temp = rem ;
		rev /= 10 ;
	}
	
	return 0 ;
}
