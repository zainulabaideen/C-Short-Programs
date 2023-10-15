#include<iostream>
using namespace std;
int main()
{
	int index,number;
	cout<<"Enrter Index:";
	cin>>index;
	int arr[index];
		for(int j=0; j<index; j++){
		cout<<"Enter the "<<j+1<< "number";
		cin>>arr[j];
	}
	cout<<"Enter The Number You want to find:";
	cin>>number;
	for(int i=0; i<index; i++){
		if(number==arr[i])
		{
			cout<<"\nYour Number is on index "<<i;	
//	break;
	}

	if(i==index-1 && number!=arr[i]){
			cout<<"Not Found";
		}

		
	}
	

	
	
}



	
