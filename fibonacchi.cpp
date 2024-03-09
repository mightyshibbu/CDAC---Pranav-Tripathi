#include<iostream>
using namespace std;
void printfibo(int num,int a,int b){

int c= a+b;
 cout<<" "<<c;
a=b;
b=c;

num--;
if(num>0){
printfibo(num,a,b);
}



}
int main(){
int num;
cout<<"enter the num";
cin>>num;
int a=0;
int b=1;
int c;
cout<<a<<" "<<b;
//cout<<c;
printfibo(num-2,a,b);
return 0;
}
