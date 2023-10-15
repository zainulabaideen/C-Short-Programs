#include<iostream>
using namespace std;
main(){
for(int i=1; i<=9; i+=2){
	if(i==1){
	cout<<" ";
}
else if(i==3){
	cout<<"  ";
}
else if(i==5){
	cout<<"   ";
}
else if(i==7){
	cout<<"    ";
}
else{
	cout<<"     ";
}
for(int j=9; j>=i; j--){
		cout<<"*";
		
	}

	cout<<endl;


}
}
