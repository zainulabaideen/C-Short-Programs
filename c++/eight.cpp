#include<iostream>
using namespace std;
main(){
int basicsalary,totalrent,rent;
float allownce,gross;
cout<<"Enter your Basic Salary:";
cin>>basicsalary;
//cout<<"Enter your House rent:";
//cin>>totalrent;
allownce=(basicsalary*0.35)+basicsalary;
cout<<"Your Dearness Allownce is="<<allownce;
rent=basicsalary*0.25;
gross=allownce+rent;
cout<<"\nYour Gross Salary="<<gross;

}
