#include<iostream>
using namespace std;
int main(){
	int arr[5],temp;
		for(int i=0; i<5; i++){
		cout<<"Enter "<<i+1<<" Number:";
		cin>>arr[i];
		
		}
		
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++ ){
			if(arr[j]<arr[i]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		
		
		
		}
		for(int j=0; j<5; j++ ){
		cout<<arr[j]<<endl;
	}
}
