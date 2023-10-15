#include<iostream>
using namespace std;
main(){
	float obno,per;
	cout<<"Enter your obtained numbers:";
	cin>>obno;
	per=(obno/1100)*100;
	cout<<per<<endl;
	if(per>=80){
		cout<<"A+";
	}
	else if(per>=70){
		cout<<"A";
	}
	else if(per>=60){
		cout<<"B";
	}
	else if(per>=50){
		cout<<"C";
	}
	else if(per>40){
		cout<<"D";
	}
	else if(per>=33){
		cout<<"E";
	}
	else{
		cout<<"F";
	}
}
