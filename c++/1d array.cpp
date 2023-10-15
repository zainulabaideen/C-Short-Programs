#include<iostream>
using namespace std;
main(){
int abc[5];
//abc[1]=3;
//abc[2]=25;
//abc[4]=35;

for(int i=0; i<=4; i++){
		cout<<"Enter the value of"<<i<<"=";
	cin>>abc[i];
	cout<<endl;
	}
	
	cout<<"{";
	for(int j=0; j<=4; j++){
	cout<<abc[j];
	if(j<=3){
		cout<<",";
	}
	}
	cout<<"}";


}


