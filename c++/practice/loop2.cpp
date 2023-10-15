#include<iostream>
using namespace std;
main(){
for(int i=4; i>=1; i--)
{
	for(int j=1; j<=4; j++)
{
	if(j>=i)
	{
		cout<<"\t*";
	}
else
	{
		cout<<"\t  ";
	}
	
}
		cout<<endl;

}

}
