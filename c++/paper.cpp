#include<iostream>
using namespace std;
main(){
int no,i;
cout<<"Enter 5 numbers between 1 and 30:\n";
while(i<=5){
cout<<"Enter a number between 1 and 30:";
cin>>no;
if(no>=1 && no<=30){
	for(int j=1; j<=no; j++){
		cout<<"*";
		
	}
i++;
}
else{
	cout<<"Invalid Number!";
}
	
}




}
