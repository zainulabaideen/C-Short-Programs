#include<iostream>
using namespace std;
#include<fstream>
int main(){
	string data;
ifstream file;
file.open("new2.txt",ios::in);
if(!file.is_open()){
	cout<<"file is not opened";
}
else{
	while(!file.eof()){
	
	data=file.get();
	if(data!=" ")
cout<<data;
	
	

//getline(file,data);
//	cout<<data<<endl;
	}
}
}
