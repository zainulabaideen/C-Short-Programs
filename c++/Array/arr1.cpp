#include<iostream>
using namespace std;
main(){
	string name[5];
int marks[5];
	cout<<"-----INPUT--------\n";
	
for(int i=0; i<5; i++){
	cout<<"Enter a student "<<i+1<<" Name :";
	cin>>name[i];
	cout<<"The Marks of "<<i+1<<":";
	cin>>marks[i];
}
cout<<"------OUTPUT-------\n";
for(int j=0; j<5; j++){
	
	cout<<"The Marks of "<<name[j]<<"="<<marks[j]<<endl;

}

}
