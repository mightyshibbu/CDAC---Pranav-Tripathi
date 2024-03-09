#include<iostream>
using namespace std;
int main(){
int i,j,num;
cout<<"enter the num";
cin>>num;
int start,end;
//Logic

if(num%2!=0){
for(int i=0; i<num ; i++){
	
	int mid = num/2;
	if(i<=mid){
	start = mid-i;
	end = mid+i;
	for(int j=0; j<num ; j++){
	if(j<start || j>end){
	cout<<" ";
	}else cout<<"*";
	}
	}
	
	else {
	++start;
	--end;
	for(int j=0; j<num ; j++){
	if(j<start || j>end){
	cout<<" ";
	}else cout<<"*";
	}
	}
	cout<<"\n";
}
}
else {
	cout<<"EVEN NUMBER diamond pattern is not possible!!";
}

//Logic
return 0;
}
