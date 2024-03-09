#include <iostream>
using namespace std;

void fibo(int num,int i,int j){
	if(num>0){
	int c=i+j;
	cout<<c<<" ";
	int temp=i;
	i=j;
	j=temp+j;
	num--;
	fibo(num,i,j);
	}else return;
return ;
}

int main(){
int num;
cout<<"Enter number upto which FIBO will be printed: "<<endl;
cin>>num;
int i=0,j=1;
cout<<i<<" "<<j<<" ";
fibo(num,i,j);
return 0;
}
