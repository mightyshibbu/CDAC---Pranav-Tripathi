#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter a 4 digit number: "<<endl;
cin>>num;
if(num<1000 || num>9999){
cout<<"ERROR! Please enter a 4 digit number!";
return 0;
}
int sum=0;
while(num>10){
	int temp=num%10;
	sum=sum+ temp;
	num=num-temp;
	num=num/10;
}
sum=sum+num;
cout<<"Sum of digits: "<<sum<<endl;
return 0;
}
