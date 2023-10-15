#include<iostream>
using namespace std;
main ()
{
	int index;
	cout<<"index=";
	cin>>index;
int a[index-1],sum=0,average,j,i;

for( i=0; i<=index; i++){
	cin>>a[i];
}
for( j=0; j<=index; j++){
	sum=sum+a[j];
	
}
cout<<"Sum="<<sum;
average=sum/index;
cout<<"Average="<<average<<endl;



}
