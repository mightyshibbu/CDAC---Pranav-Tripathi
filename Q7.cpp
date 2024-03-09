#include <iostream>
using namespace std;

int main(){
int num;
int temp=1;
cout<<"Enter number to print factorial series: ";
cin>>num;
for(int i=1; i<=num ; i++){
temp=temp*i;
cout<<" "<<temp;
}
return 0;
}

