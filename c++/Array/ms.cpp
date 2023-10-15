#include<iostream>
using namespace std;
main(){
	int arr[5];
	int max,min;
	
	for(int i=0; i<5; i++){
		cout<<"Enter "<<i+1<<"  Number:";
		cin>>arr[i];
		
	}
	
	max=arr[0],min=arr[0];
	
	for(int i=0; i<5; i++){
		
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
		
		
		
	}
	
	    cout<<"Maximum Number is="<<max<<endl;
		cout<<"Minimum Number is="<<min;
	

}
