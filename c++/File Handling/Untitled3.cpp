#include<iostream>
#include<windows.h>
#include<string>
#include<fstream>
#include <bits/stdc++.h> 
using namespace std;
int add();
 int index; 
//int addarr[0][4];
int itemquantity[0],itemprice[0];
string itemname[0];
main()
	{
		int choice;
	
		cout<<"Press 1 to enter data:\n";
	cin>>choice;
		
		if(choice==1){
		
			add();
				
			}
	
	}
	int add(){

	cout<<"How many Items do you want to add:";
	cin>>index;	

	itemprice[index],itemname[index],itemquantity[index];
	for(int i=0; i<index; i++){
	cout<< "Enter "<<i+1<<" Item Name:";
	cin>>itemname[i];	
		cout<< "Enter " <<i+1<< " Item Quantity:";
	cin>>itemquantity[i];	
		cout<< "Enter " <<i+1<<" Item Price:";
	cin>>itemprice[i];			
	}
	cout<<endl<<"\t\tYour Complete Items Are\n";
	
	cout<<"Sr.\t\tName\t\tQuantity\t\tPrice\n\n";
	for(int i=0; i<index; i++){
		cout<<i+1<<"\t\t"<<itemquantity[i]<<"\t\t"<<itemprice[i]<<"\t\t"<<endl;
	
	}
	
	}
