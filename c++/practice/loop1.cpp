#include<iostream>
using namespace std;
main(){
for(int i=1; i<=9; i+=2){
for(int k=3; k<=i; k+=2){
	cout<<" ";
}
for(int j=9; j>=i; j--){
		cout<<"*";
		
	}

	cout<<endl;


}
}
