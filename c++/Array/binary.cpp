#include<iostream>
using namespace std;
int search(int arr[],int index,int key){
	int s=0,e=index,m;
	while(s<=e){
		m=(s+e)/2;
		if(arr[m]==key){
			return m;
		
		}
		else if(key<arr[m]){
			e=m-1;
		}
		else{
			s=m+1;
		}
	}
	return -1;
}
int main(){
		int index,number,key;
		cout<<"Enter index";
		cin>>index;
		int arr[index];
			for(int j=0; j<index; j++){
		cout<<"Enter the "<<j+1<< "number";
		cin>>arr[j];
	}
		cout<<"Enter The Number You want to find:";
	cin>>key;
	
	cout<<search(arr,index,key);
	
}
