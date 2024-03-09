#include<iostream>
#include <string>
using namespace std;

int main(){
int num;
char temp;
cout<<"enter the num";
cin>>num;
char ar[num];
string name = "";
for(int i=0; i<=num ; i++){
temp=cin.get();
name=name+temp;
}
cout<<"Final String is: "<<name<<endl;
return 0;
}
