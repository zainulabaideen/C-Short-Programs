#include<iostream>
using namespace std;
main(){
int marks[5];
float per;
int a=0,b=0,c=0,d=0,e=0,f=0
for(int i=0; i<5; i++){
	
	cout<<"The Marks of "<<i+1<<":";
	cin>>marks[i];
}
cout<<"Marks\tGrade\n";
for(int i=0; i<5; i++){
	if(per>=80){
		cout<<marks[i]<<"\tA+\n";
		a=a+1;
	}
		else if(per>=70){
		cout<<marks[i]<<"\tA\n";
		b=b+1;
	}
		else if(per>=60){
		cout<<marks[i]<<"\tB\n";
		c=c+1;
	}
	else if(per>=60){
		cout<<marks[i]<<"\tC\n";
		d=d+1;
	}
	else if(per>=50){
		cout<<marks[i]<<"\tD\n";
		e=e+1;
	}
	else{
		cout<<marks[i]<<"\tFail\n";
		f=f+1;
	}
}
cout<<"\n A+ Grade="<<a<<"";
cout<<"\n A Grade="<<b<<"";
cout<<"\n B Grade="<<c<<"";
cout<<"\n C Grade="<<d<<"";
cout<<"\n D Grade="<<e<<"";
cout<<"\n Fail Grade="<<f<<"";
}
