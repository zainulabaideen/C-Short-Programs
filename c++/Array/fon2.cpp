#include<iostream>

using namespace std;
void table(int a);

int main()
{
	int a;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<table(a);
}
void table(int a){
	for(int x=1; x<=10; x++){
		cout<<a<<"x"<<x<<"="<<a*x<<endl;
	}
}
