#include<iostream>
using namespace std;

int sum; //global 

int returnSum(int num)
{
	int temp=num%10;
	sum=sum+ temp;
	num=num-temp;
	num=num/10;	
	if(num<10){
	
	sum = sum+num;
	return sum;
	}else {returnSum(num);}
	return sum;
}


int main(){

int num;
cout<<"Enter a 4 digit number: "<<endl;
cin>>num;
/* if(num<=1000 || num<10000){
cout<<"Please enter a 4 digit number!";
return 0;
}
*/ 
int res=returnSum(num);
cout<<"Sum of digits: "<<res<<endl;
return 0;
}
