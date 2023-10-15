//program 1: Calculation of Perimeter

#include<iostream>
using namespace std;
main(){
	int width,length,per;
cout<<"Enter the Length :";
cin>>length;
cout<<"\nEnter the Width:";
cin>>width;
per=2*(length+width);
cout<<"Perimeter of Rectangle is  : "<<per;
}



//Question:2  Find the Circumference and Area of a Circle


#include<iostream>
using namespace std;
main(){
 float radius, area, circumference, PI = 3.14159;
 cout<<"Enter the Radius of a Circle:";
 cin>>radius;
 circumference=2*PI*radius*radius;
 area=PI*radius*radius;
 cout<<"Area of a Circle:"<<area;
 cout<<"\nCircumference of a Circle:"<<circumference;
 
}


//Question 3: Find the Hypotenius of Right Triangle

#include<iostream>
#include<cmath>
using namespace std;
main(){
	float base,height,hypo;

	cout<<"Enter the Base:";
	cin>>base;
	cout<<"Enter the Height:";
	cin>>height;
	hypo=sqrt(base*base+height*height);
	cout<<"Value of Hypotenious is:"<<hypo;
	
}

//Question 4: Find the Cube

#include<iostream>
using namespace std;
main(){
int no,cube;
cout<<"Enter Any Number:";
cin>>no;
cube=no*no*no;
cout<<"Cube of a Number:"<<cube;
}




//Question 5: find the remainder
#include<iostream>
using namespace std;
main(){
int no1,no2,remainder;
	cout<<"Enter the First Number:";
	cin>>no1;
	cout<<"Enter the Second Number:";
	cin>>no2;
	remainder=no1%no2;
	cout<<"Remainder:"<<remainder;
}


//Question 6: Find the Distance between two Points


#include<iostream>
#include<cmath>
using namespace std;
int main(){
float distance,x1,x2,y1,y2,x,y;
cout<<"Enter the x-cordinate of First point:";
	cin>>x1;
	cout<<"Enter the x-cordinate of second point:";
	cin>>x2;
	cout<<"Enter the y-cordinate of First point:";
	cin>>y1;
	cout<<"Enter the y-cordinate of second point:";
	cin>>y2;
	x=x2-x1;
	x*=x;
	y=y2-y1;
	y*=y;
	distance=sqrt(x+y);
	cout<<"Distance Between Two points is:"<<distance;
return 0;
}
	
	
	
//	Question 7:find the largest number or Chracter

#include<iostream>
using namespace std;
main(){
string no1,no2,no3;
cout<<"Enter the First Number/chracter:";
	cin>>no1;
	cout<<"Enter the Second Number/chracter:";
	cin>>no2;
cout<<"Enter the Third Number/chracter:";
	cin>>no3;
	if(no1>no2 && no1>no3){
		cout<<no1<<"  is the largest value from three of them \n";
	}
	else if(no2>no1 && no2>no3){
		cout<<no2<<" is the largest value from three of them\n";
	}
	else if(no3>no2 && no3>no1){
		cout<<no3<<" is the largest value from three of them";
	}
	else{
		cout<<"\n Values are Equal\n Try Again ";
	}
}

