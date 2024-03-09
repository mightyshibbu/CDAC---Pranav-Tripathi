#include<iostream>
using namespace std;

int main(){
int totalnumbers;
cout<<"enter total numbers: "<<endl;
cin>>totalnumbers;
int arr[totalnumbers];
for(int i=0; i<totalnumbers; i++){
	cin>>arr[i];
}
for(int i=0; i<totalnumbers; i++){
	cout<<"Number "<<i+1<<" :"<<2*arr[i]<<endl;
}

return 0;
}
