#include<iostream>
using namespace std;
main(){
int arr[2][2];
int arr1[2][2];
int res[2][2];

	cout<<"-----1st Matrix is--------\n";
for(int i=0; i<2; i++){

	for(int j=0; j<2; j++){
	cout<<"1st matrix ["<<i<<"] ["<<j<<"] :";
	cin>>arr[i][j];
		}
	
	}
	cout<<"-----2nd Matrix is--------\n";
for(int i=0; i<2; i++){

	for(int j=0; j<2; j++){
	cout<<"2st matrix ["<<i<<"] ["<<j<<"] :";
	cin>>arr1[i][j];
		}
	
	}
		cout<<"The resultant Matrix is :\n";
for(int i=0; i<2; i++){

	for(int j=0; j<2; j++){
		
	res[i][j]=arr[i][j]+arr1[i][j];
	cout<<"\t"<<res[i][j];
		}
	cout<<endl;
	}
	int max;
		max=res[0][0];
	for(int i=0; i<2; i++){

	for(int j=0; j<2; j++){
		
	if(max<res[i][j]){
	max=res[i][j];
	
		}
	
		}
	

	}
	cout<<"1st Max is= "<<max;	
	
	}
