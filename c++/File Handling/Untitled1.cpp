#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
	
using namespace std;
string username,pasword;
int signup(){

	cout<<"Enter User NAME:";
	cin>>username;
	cout<<"Enter Pasword:";
	cin>>pasword;
	
	ofstream write("Txt.txt",ios::app);
	if(write){

	write<<username<<"\t"<<pasword<<endl;

	write.close();
		cout<<"User Added Successfully";
			}
			else{
				cout<<"File Not found";
			}

}
bool Auth(){
	string checkuser,checkpasword,un,pas;
	cout<<"Enter UserName:";
	cin>>checkuser;
		cout<<"Enter Pasword:";
	cin>>checkpasword;
	ifstream read;
	read.open("Txt.txt");
	 while (read >> un >> pas)
	 {	
	 
	 	if(un==checkuser && pas==checkpasword){
		read.close();
		return true;
			}
		
	
	
}
return false;
read.close();
}
int main(){
	
	int choice;
	choice:
			system("CLS");
	cout<<"Press 1 to SignUp\nPress 2 to Authenticate\nPress 0 to exit";
	cin>>choice;
	while(choice!=0){
		
		if(choice==1){
				system("CLS");
			signup();
			Sleep(2000);
			goto choice;
		}
		else if(choice==2){
				system("CLS");
			 if (Auth()) {
                    cout << "Authentication successful!\n";
                } else {
                    cout << "Authentication failed!\n";
                }
                Sleep(2000)
                goto choice;
		}
		else {
				system("CLS");
			cout<<"Invalid Choice";
			goto choice;
		}
	}
}
