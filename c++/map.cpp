#include<iostream>
using namespace std;
main ()
{
char op;
int x,y,n;
cout<<"Enter mapsize number:";
cin>>n;
if(n>=5 && n<=9){
	cout<<"Enter x-axis number:";
	cin>>x;
	cout<<"Enter y-axis number:";
	cin>>y;
int i=1;
while(i<=n){
	int j=1;
	cout<<i;
	while(j<=n){
		if(i==x && j==y){
		
			cout<<"X";
		}
		else{
			cout<<"-";
		}
		j++;
	}
	cout<<endl;
	i++;
}
	
do{
	cout<<"Enter 1 to Update Treasure Coordinates"<<endl;
	cout<<"Enter 2 to shift left or right"<<endl;	
	cout<<"Enter 3 to shift up and down"<<endl;
	cin>>op;
	switch(op){
		case'1':
	
			cout<<"Enter new coordinates of x ";
			cin>>x;
			cout<<"Enter new coordinates of y ";
			cin>>y;
			
int i=1;
while(i<=n){
	int j=1;
	cout<<i;
	while(j<=n){
		if(i==x && j==y){
		
			cout<<"X";
		}
		else{
			cout<<"-";
		}
		j++;
	}
	cout<<endl;
	i++;
}

	
break;
case '2':

	int left;
	cout<<"Enter l for left";
	cin>>left;
	if(left=='l'){
		x=x-1;
	}
	else{
		x=x+1;
	}
	

break;
}
			
}
while(op!='e');

}}
