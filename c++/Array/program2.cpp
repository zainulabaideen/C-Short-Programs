#include<iostream>
using namespace std;
main(){
int marks[5],max,roll[5],higroll;

for(int i=0; i<5; i++){
	cout<<"Enter a student "<<i+1<<" Roll No :";
	cin>>roll[i];
	cout<<"The Marks of "<<i+1<<":";
	cin>>marks[i];
}
max=marks[0];
higroll=roll[0];
	for(int i=0; i<5; i++){
		
		if(max<marks[i]){
			max=marks[i];
			higroll=roll[i];
		}
	}
	
		cout<<"\tRoll no."<<higroll;
		cout<<"\tHighest Marks are:"<<max;
		

}
