#include<iostream>

#include<fstream>
using namespace std;
int main()
{
string s;
//	string name[5],phone[5],roll[5];
//ofstream myfile;
//myfile.open("J:\\uni\\c++\\data.txt");
//myfile<<"Name\t\tPhone\t\tRollno"<<endl;
//for(int x=0; x<5; x++){
//
//cout<<"What is Your Name?";
//getline(cin,name[x]);
//cout<<"What is Your phone?";
//getline(cin,phone[x]);
//cout<<"What is Your rollNo?";
//getline(cin,roll[x]);
//myfile<<name[x]<<"\t\t"<<phone[x]<<"\t\t"<<roll[x]<<endl;
//}
ifstream myfile;
myfile.open("J:\\uni\\c++\\data.txt");
	myfile>>s;
while(!myfile.eof()){
	cout<<endl;
	myfile>>s;
	cout<<s<<"\t";
}

myfile.close();


}
