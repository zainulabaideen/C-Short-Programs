#include<iostream>
#include<fstream>
using namespace std;
main(){
	string st;
ofstream write;
write.open("new2.txt");
write<<"1234567";
write.close();
ifstream read;
read.open("new2.txt");
getline(read,st);
cout<<st;
read.close();
}
