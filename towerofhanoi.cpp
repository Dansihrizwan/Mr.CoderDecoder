#include<iostream>
using namespace std;

void TOH(int towerCount  , char source , char helping , char destination ){
	if(towerCount>0){
		TOH(towerCount-1 ,source , destination , helping);
        cout<<"Move From "<<source<<" To "<<destination<<endl;
        TOH(towerCount-1,helping,source,destination);
}
}

main(){
	TOH(3,'A','B','C');
}
