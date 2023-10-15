#include<iostream>
using namespace std;
main(){
char ch;
cout<<"Enter A for Adventure Movies:";
cout<<"\nEnter B for Comedy Movies:";
cout<<"\nEnter C for Family Movies:";
cout<<"\nEnter D for Horror Movies:";
cin>>ch;
if(ch=='A')
{
	cout<<"Adventure Movies";
	}	
else if(ch=='B')
{
	cout<<"Comedy Movies";
	}
else if(ch=='C')
{
	cout<<"Family Movies";
	}
	else{
		cout<<"Horror Movies";
	}		
}
