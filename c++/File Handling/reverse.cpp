#include<iostream>
using namespace std;
int main(){
int arr[5],index;
cout<<"Enter the number of elements you want to add";
cin>>index;
for(int i=0; i<index; i++){

cout<<"Enter "<<i+1<<" element:";
cin>>arr[i];	
}
for(int i=index-1; i>=0; i--){
	cout<<arr[i]<<endl;
}
}
