#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int key){

	for(int i=0; i<n; i++){
		
		if(arr[i]==key){
		
			return i;

}
		
	}
	return -1;
}
main(){
	int n,key;
	cout<<"Enter Array Index Number:";
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
			
	}

	cout<<"Enter a Key :";
	cin>>key;
	cout<<linearSearch(arr,n,key)<<endl;
	
}
