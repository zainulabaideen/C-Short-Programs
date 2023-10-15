#include<iostream>
using namespace std;
main(){
	char ch;
	cout<<"\t==================================\n\n";
	cout<<"\t\tMovie Category  \n";
	cout<<"\t==================================\n";	
	cout<<"Enter A for Adventure Movies";
	cout<<"\nEnter B for Comedy Movies";
	cout<<"\nEnter C for Family Movies";
	cout<<"\nEnter D for Horror Movies\n";
	cout<<"Enter Code For Movie Category:";
	cin>>ch;
	switch(ch){
		case 'A':
			case 'a':
			cout<<"Adventure Movie";
			cout<<"\nYour Selection is Adventure Movie";
			break;
		case 'B':
			case 'b':
			cout<<"Comedy Movie";
			cout<<"\nYour Selection is Comedy Movie";
			break;
			case 'C':
				case 'c':
			cout<<"Family Movie";
			cout<<"\nYour Selection is Family Movie";
			break;
			case 'D':
				case 'd':
			cout<<"\nHorror Movie";
			cout<<"\nYour Selection is Horror movie";
			break;
			default:
				cout<<"Wrong Answer";
	}
	
}
