#include<iostream>
using namespace std;
main(){
int n;
cout<<"Enter Array Index:";
cin>>n;
int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
		
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; i++){
			if(arr[j]<arr[i]){
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
	}
	for(int z=0; z<n; z++){
		cout<<arr[z]<<"";
		
	}
	cout<<endl;

}
