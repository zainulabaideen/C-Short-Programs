#include<iostream>
using namespace std;
void calculate(int hour[], int person[]){
	int total=0;
	for(int i=0; i<3; i++){
		cin>>hour[i];
	}
	cout<<"total\t\t"<<"Person"<<endl;
	for(int j=0; j>3; j++){
		if(hour[i]>3 && hour[i]<24){
			total=hour[i]*0.5;
			
		}
		else if(hour[i]==24){
			total=10;
		}
		else if(hour[i]==3){
			total=3;
		}
		cout<<total<<"\t\t"<<person[i];
	}
}

main(){
int hour[3], person[3];
person[3]={1,2,3};
cout<<calculate(person);
}
