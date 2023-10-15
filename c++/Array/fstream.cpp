#include<iostream>
using namespace std;
#include<fstream>
int main{
ofstream myfile;
myfile.open('file.txt');
myfile<<"Hello I am here.";
myfile.close();


}
