#include<iostream>
using namespace std;
void max(int m[5]){
	int maximum;
	maximum=m[0];
	for(int i=0; i<5; i++){
		if(maximum<m[i]){
			maximum=m[i];
		}
	
		
	}
		cout<<maximum;
//	return maximum;
}
int main(){
	int marks[5];
	for(int i=0; i<5; i++){
		cout<<"Enter Marks of "<<i+1<<" :";
		cin>>marks[i];
	}
max(marks);
}
