#include<iostream>
using namespace std;
main(){
float c,f,cel,far;
char ch;


cout<<"Press C to covert temprature from Fahrenheit to Celsius\n";
cout<<"Press F to covert temprature from  Celsius to Fahrenheit";
cout<<"Enter Your Choice(C/F)";
cin>>ch;


	
	
if(ch=='F'){
	cout<<"Enter Temprature in Farenhite:";
cin>>c;
cel=(c-32)*5/9;
	cout<<"Conversion of Celcius into Farenhit:"<<cel<<"Deg";	
}
else if(ch=='C'){
	cout<<"Enter Temprature in Celcius:";
	cin>>f;

	far=(f*9/5)+32;
	cout<<"Conversion of Farenhit into Celcius:"<<far<<"Deg";	
}
else{
	cout<<"Worng Input";
}
}
