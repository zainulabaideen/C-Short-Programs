#include<iostream>
using namespace std;
void square(int n){
	cout<<"Square of "<<n<<" = "<<n*n<<endl;
	
	
}
int main(){
int arr[5];

for(int i=0; i<5; i++){
	cout<<"Enter "<<i+1<< "Integer : ";
	cin>>arr[i];
}
for(int i=0; i<5; i++){
	square(arr[i]);
	
}

}
