#include<iostream>
using namespace std;
main(){
	int no,qua,total;
	int coffee=100,tea=50,cold=150,shake=200;
	
	cout<<"\t==================================\n\n";
	cout<<"\t\tMENU CARD  \n";
	cout<<"\t==================================\n";	
	cout<<"Select Your Drink";
	cout<<"\n 1.COFFEE";
	cout<<"\n 2:TEA";
	cout<<"\n 3:COLD COFFEE\n";
	cout<<"4:MILK SHAKE\n";
	cin>>no;
		cout<<"Enter the Quantity:";
	cin>>qua;
	switch(no){
		case 1:
		cout<<"\nYou have selected Coffee";
		total=qua*coffee;
		break;
		case 2:
		cout<<"\nYou have selected Tea";
		total=qua*tea;
		break;
		case 3:
		cout<<"\nYou have selected Cold Coffee";
		total=qua*cold;
		break;
		case 4:
		cout<<"\nYou have selected Milk Shake";
		total=qua*shake;
		break;
			default:
				cout<<"Wrong Answer";
	}
cout<<"Total Amout:"<<total;
	
	
}
