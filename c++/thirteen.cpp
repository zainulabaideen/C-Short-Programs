#include<iostream>
using namespace std;
main(){

float per,number;
cout<<"Enter Your Obtained Number:";
cin>>number;
per=(number/1100.0)*100;

cout<<"percentage:"<<per<<endl;
if(per>=80){
	cout<<"A+";
}
else if(per>70 && per<80){
	cout<<"A";
}
else if(per>60 && per<70){
	cout<<"B";
}
else if(per>50 && per<60){
	cout<<"C";
}
else if(per>40 && per<50){
	cout<<"D";
}
else if(per>33 && per<40){
	cout<<"A";
}
else{
	cout<<"You are Fail";
}
}
