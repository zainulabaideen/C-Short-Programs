#include<iostream>
using namespace std;
main(){
int per[3];
int mango[3],orange[3],banana[3];

for(int i=0; i<3; i++){
	cout<<"For Customer "<<i+1<<endl;
cout<<"Enter the Number of Mangoes:";
cin>>mango[i];
mango[i]*=20;

cout<<"Enter the Number of Bananas:";
cin>>banana[i];
banana[i]*=5;
cout<<"Enter the Number of Oranges:";	
cin>>orange[i];
orange[i]*=10;
	cout<<"Total Bill of Customer "<<i+1 <<" is "<<mango[i]+banana[i]+orange[i]<<endl;
}

}

