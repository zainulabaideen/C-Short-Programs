#include<iostream>
using namespace std;
int main(){
    int no1=23,no2=43, no3=2,no4=8;
    
    

     
    int sum,average,product;
    sum=no1+no2+no3+no4;
    product=no1*no2*no3*no4;
    average=no1+no2+no3+no4/4;
    cout<<"sum="<<sum<<endl;
    cout<<"Product="<<product<<endl;
    cout<<"average="<<average<<endl;

    
    // second program
    float V,A;
    int r=20;
    float pi=3.14;
    A=4*pi*(r*r);
    V=2*pi*r;
    cout<<"Area="<<A<<endl;
    cout<<"Volume="<<V<<endl;


    //third program
    float no;
    int miles,km;
    cout<<"Enter miles:";
    cin>>miles;
    km=1.06*miles;

    cout<<"km="<<km;
    
}