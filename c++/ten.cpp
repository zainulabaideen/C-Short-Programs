#include<iostream>
using namespace std;
main(){
int no;
cout<<"Enter an integer:";
cin>>no;
if(no>0){
	cout<<"You entered a positive integer:"<<no;
	
}	
else if(no<0){
	cout<<"You entered a negative integer:"<<no;
	
}
else{
		cout<<"You entered a zero:"<<no;
	
}
}
