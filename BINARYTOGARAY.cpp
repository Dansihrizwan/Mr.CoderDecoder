#include<iostream>
using namespace std;
int BTOG(char n){
	string str;
	str.substr()
	if (n==0){
		return 0 ;
		}else{
		int lastdigit = n%10;
	    int secondlastdigit = (n/10)%10;
	    if(lastdigit==secondlastdigit){
	    	return (10 * BTOG(n/10));
		}else{
			return 1 + (10* BTOG(n/10));
		}
	}
}
main(){
	cout<<BTOG(10100);
}
