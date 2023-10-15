#include<iostream>
using namespace std;
int main()
{
	int index,number,arr[5];
	bool found;


	for(int j=0; j<arr[5]; j++){
		cout<<"Enter the "<<j+1<< "number";
		cin>>arr[j];
	}
	
	cout<<"Enter The Number You want to find:";
	cin>>number;
	for(int i=0; i<arr[5]; i++){
		if(number==arr[i])
		{
			cout<<"\nYour Number is on index "<<i;	
		found=true;
		break;
	}
		else{
			found=false;
		}	
		
		
	}
	
	if(found=false){
		cout<<"Not Found";
	}
	
	
}
