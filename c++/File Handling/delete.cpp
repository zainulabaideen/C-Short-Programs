#include<iostream>
using namespace std;
int main(){
int arr[5],elem,found=0,index,ind;
cout<<"Enter the number of elements you want to add";
cin>>ind;
for(int i=0; i<ind; i++){

cout<<"Enter "<<i+1<<" element:";
cin>>arr[i];	
}	
cout<<"Enter the number you want to find";
cin>>elem;

for(int i=0; i<ind; i++){
	if(elem==arr[i]){
		index=i;
		for(int j=i; j<=ind; j++){
			arr[i]=arr[i+1];
			found++;
		
		}
			ind--;
		
	}
}
if(found!=0){
	cout<<"\nElement found at "<<index<<endl;
}
else{
	cout<<"Element not found\n";
}
cout<<"Updated Array";
for(int i=0; i<ind; i++){

cout<<arr[i]<<endl;	
}
	//		remove duplications
cout<<"Remove duplications";
for(int i=0; i<ind; i++){
		for(int j=i+1; j<ind;){
		if(arr[j]==arr[i]){
	 for (int k = j; k < ind; k++)
			{
               arr[k] = arr[k + 1];
            }
		
		ind--;
		
		}
		else{
			j++;
		}
	}
	for(int i=0; i<ind; i++){
cout<<arr[i]<<endl;	
}


}}
