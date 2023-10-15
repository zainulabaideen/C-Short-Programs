#include<iostream>
using namespace std;
main(){
string name[5];
int salary[5],annualsalary[5];

for(int i=0; i<5; i++){
	cout<<"Enter "<<i+1<<" Person Name :";
	cin>>name[i];
	cout<<"Enter the Salary of "<<i+1<<" Person:";
	cin>>salary[i];
}

for(int i=0; i<5; i++){
annualsalary[i]=salary[i]*12;
if(annualsalary[i]>=250000){
	cout<<name[i]<<"\t"<<salary[i];
	cout<<"\tTAX TO BE PAID\n";
	
}
else{
		cout<<name[i]<<"\t"<<salary[i];
	cout<<"\tNo Tax\n";
}

}

}
