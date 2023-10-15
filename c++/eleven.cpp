#include<iostream>
using namespace std;
main(){
int no1,no2;
cout<<"Enter first number:";
cin>>no1;
cout<<"Enter second number:";
cin>>no2;
if(no1>no2){
	cout<<no1<<" is a Maximum number";
		cout<<no2<<" is a Minimum number";
}
else if(no1<no2){
	cout<<no2<<" is a Maximum number\n";
		cout<<no1<<" is a Minimum number";
	
}
else if(no1==no2) {
		cout<<"this is equal";
}
else{
	cout<<"this is zero";
}
}
