#include<iostream>
using namespace std;
int x,y;
//int myfunction();
	int divie(){
	return x/y;

	}
		int multi(){		
	return x*y;
	}
	
int myFunction() {
	cout<<x+y<<endl;
	return divie();

  
}
int myFunction2() {
cout<<x-y<<endl;
  return multi();
}

int main() {
	int n;

	cout<<"Enter a number:";
	cin>>n;
	cin>>x>>y;
	if(n>10){
	 cout<<"Sum="<< myFunction()<<"\n";
	 
		
	}
	else{
cout <<"differnce="<< myFunction2();
	}
 
  return 0;
}






