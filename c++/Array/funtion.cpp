#include<iostream>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;
cout<<"Sum= "<<add(a,b)<<endl;
cout<<"Subtract= "<<subtract(a,b)<<endl;	
cout<<"Product="<<multiply(a,b)<<endl;
cout<<"Division="<<divide(a,b)<<endl;
}
int add(int a, int b){
	return a+b;
}
int subtract(int a, int b){
	return a-b;
	}
int multiply(int a, int b){
		return a*b;
}
int divide(int a, int b){
		return a/b;
}
