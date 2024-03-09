#include<iostream>
using namespace std ;
int main()
{
	int sum=0;
	int num=0;
	cout<<"Enter Number: "<<endl;
	cin>>num;
	for(int i =1;i<num;i++)
	{
	if(num%i==0){
		sum+=i;
	}
	}
	if(num==sum){
		cout<<"perfect number!"<<endl;
	}else{
		cout<<"not perfect number!"<<endl;
	}
return 0;
}
