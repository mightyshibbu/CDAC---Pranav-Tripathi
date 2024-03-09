#include<iostream>
using namespace std;
int main(){
int a=10;
int b = 5;

cout<<"before swapping";
cout<<a<<" "<<b;
a=a+b;
b=a-b;
a=a-b;
cout<<"after swapping";
cout<<a<<" "<<b;
return 0;
}
