#include<iostream>
using namespace std;
int max(int m[5]){
	int maximum=m[0];
	for(int i=0; i<5; i++){
		if(maximum<m[i]){
			maximum=m[i];
		}
		
		}return maximum;
	}
int main(){
	int marks[5];
	for(int i=0; i<5; i++){
		cout<<"Enter Marks of "<<i+1<<" :";
		cin>>marks[i];
	}
	cout<<max(marks);
}
