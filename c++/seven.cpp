#include<iostream>
using namespace std;
main(){
	int sub1,sub2,sub3,sub4,sub5;
	float average,totalmarks;
	cout<<"Enter First Subject Number:";
	cin>>sub1;
cout<<"EnterSecond Subject Number:";
	cin>>sub2;
	cout<<"Enter Third Subject Number:";
	cin>>sub3;
	cout<<"Enter Fourth Subject Number:";
	cin>>sub4;
	cout<<"Enter Fifth Subject Number:";
	cin>>sub5;
	totalmarks=sub1+sub2+sub3+sub4+sub5;
	cout<<"Your Total Marks are="<<totalmarks;
	average=totalmarks/5;
	cout<<"\nYour Average is="<<average;
}
