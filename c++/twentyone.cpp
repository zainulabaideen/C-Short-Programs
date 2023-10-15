#include<iostream>
using namespace std;
main(){
int no=1,tno;
cout<<"Enter Table No:";
cin>>tno;
while(no<=10){
	cout<<tno<<"*"<<no<<"="<<tno*no<<endl;
	no++;
}
}
