#include<iostream>
//#include<cctype>
using namespace std;
int main(){
char ch;
cout<<"Enter Any Chracter:";
cin>>ch;
//isalpha() function
cout<<"Check is it a chracter or not?\n";
int chracter=isalpha(ch);
cout<<chracter<<endl;
//isisalnum() function
cout<<"Check wheter it is a character or numbr or not?\n";
int charornum=isalnum(ch);
cout<<charornum<<endl;
//isdigit() function
cout<<"Check is it a digit or not?\n";
int digit=isdigit(ch);
cout<<digit<<endl;
//islower() function
cout<<"Check is it a in a lowercase or not?\n";
int lower=islower(ch);
cout<<lower<<endl;
//isupper() function
cout<<"Check is it a in a uppercase or not?\n";
int upper=isupper(ch);
cout<<upper<<endl;
//isprint() function
cout<<"Check is it a in a Printable or not?\n";
int print=isprint(ch);
cout<<print<<endl;
//ispunct() function
cout<<"Check is it a in a Printable excluding space,letter,digit or not?\n";
int punct=ispunct(ch);
cout<<punct<<endl;
//isspace() function
cout<<"Check is it a whitspace chracter or not?\n";
int whitespace=isspace(ch);
cout<<whitespace<<endl;



//toupper()
cout<<"Convert into UpperCase\n";
char uppercase=toupper(ch);
cout<<uppercase<<endl;
//tolower()
cout<<"Convert into LowerCase\n";
char lowercase=tolower(ch);
cout<<lowercase<<endl;

string data;
cout<<"\nEnter any data:";
cin>>data;


//No of Elements Stored 
cout<<"Elements stored in string\n";
cout<<data.size()<<endl;
//Length of Elements Stored 
cout<<"Length of  string\n";
cout<<data.length()<<endl;
//Capacity Stored 
cout<<"Capacity of string\n";
cout<<data.capacity()<<endl;
//Capacity Stored 
cout<<"Max_Size of string\n";
cout<<data.max_size()<<endl;
//Empty
cout<<"Is string Empty or Not\n";
cout<<data.empty()<<endl;
//at()
cout<<"Character at position 2\n";
cout<<data.at(2)<<endl;
//substring()
cout<<"Substring from position 2 to 4: \n";
cout<<data.substr(2,4)<<endl;
//find()
cout<<"First occurrence of 'h': \n";
cout<<data.find('h')<<endl;
//find_first_of()
cout<<"First occurrence of any character in asdf \n";
cout<<data.find_first_of("asdf")<<endl;
//find_last_of()
cout<<"Last occurrence of any character in asdf \n";
cout<<data.find_last_of("asdf")<<endl;

//[]operator
cout<<"Character at position 5 using [] operator: ";
cout<<data[5];
}

